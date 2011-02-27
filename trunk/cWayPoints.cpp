#include "cWayPoints.h"
#include <math.h>

// gdal zeile 330-335
// float CMapDEM::getElevation(double lon, double lat)

/* Constants (WGS ellipsoid) */
const double a = 6378137.0;
const double e = 8.1819190842622e-2;
const double pi = 3.1415926535897932384626433832795;

wayP wayPoints[20];

cWayPoints::cWayPoints()
{    

}
cWayPoints::~cWayPoints()
{

}

ECEF cWayPoints::getGeo2ECEF(double lon,double lat, double alt)
{
    double n;
    ECEF pos;
    /* Calculation */
    lat                 = lat*(pi/180.0f);
    lon                 = lon*(pi/180.0f);
    n                   = a/sqrt((1.0-pow(e,2)*pow(sin(lat),2)));
    pos.ecefX           = int((n+alt)*cos(lat)*cos(lon));
    pos.ecefY           = int((n+alt)*cos(lat)*sin(lon));
    pos.ecefZ           = int((n*(1-pow(e,2))+alt)*sin(lat));
    return pos;
}

geoDetic cWayPoints::getECEF2Geo(double x,double y,double z)
{
    double b, ep, p, th, n;
    geoDetic pos;
    /* Calculation */
    b = sqrt(pow(a,2)*(1-pow(e,2)));
    ep = sqrt((pow(a,2)-pow(b,2))/pow(b,2));
    p = sqrt(pow(x,2)+pow(y,2));
    th = atan2(a*z, b*p);
    pos.lon = atan2(y, x);
    pos.lat = atan2((z+ep*ep*b*pow(sin(th),3)), (p-e*e*a*pow(cos(th),3)));
    n = a/sqrt(1-e*e*pow(sin(pos.lat),2));
    pos.alt = p/cos(pos.lat)-n;
    pos.lat = (pos.lat*180)/pi;
    pos.lon = (pos.lon*180)/pi;
    return pos;
}

void cWayPoints::setWayPoint(int num,double lon,double lat,double alt )
{
    setGeodetic(num,lon,lat,alt );
    ECEF ecefData = getGeo2ECEF(lon,lat,alt);
    setECEF(num,ecefData.ecefX,ecefData.ecefY,ecefData.ecefZ);
}


void cWayPoints::setGeodetic(int num,double lon,double lat,double alt )
{
    wayPoints[num].geo.lon = lon;
    wayPoints[num].geo.lat = lat;
    wayPoints[num].geo.alt = alt;    
}


void cWayPoints::setECEF(int num,double x,double y,double z)
{
    wayPoints[num].ecef.ecefX = x;
    wayPoints[num].ecef.ecefY = y;
    wayPoints[num].ecef.ecefZ = z;
}


geoDetic cWayPoints::getGeodetic(int num)
{
    geoDetic pos;
    pos.lon = wayPoints[num].geo.lon;
    pos.lat = wayPoints[num].geo.lat;
    pos.alt = wayPoints[num].geo.alt;
    return pos;
}


ECEF cWayPoints::getECEF(int num)
{
    ECEF pos;
    pos.ecefX = wayPoints[num].ecef.ecefX;
    pos.ecefY = wayPoints[num].ecef.ecefY;
    pos.ecefZ = wayPoints[num].ecef.ecefZ;
    return pos;
}




//#define max(a,b)    (((a) > (b)) ? (a) : (b))
//#define min(a,b)    (((a) < (b)) ? (a) : (b))
//double toRadians (double ra)
//{
//    return ra/PI*180.;
//}
//double toDegrees (double de)
//{
//    return de*PI/180.;
//}


//    const ReferenceEllipsoid Airy1830           (6377563.396, 6356256.909);
//    const ReferenceEllipsoid AustralianNational (6378160.000, 6356774.719);
//    const ReferenceEllipsoid International24    (6378388.000, 6356912.000);
//    const ReferenceEllipsoid WGS84              (6378137.000, 6378137.000);//6356752.314);
//    const ReferenceEllipsoid GRS80              (6378137.000, 6356752.314);
//    const ReferenceEllipsoid WGS72              (6378135.000, 6356750.520);
//    const ReferenceEllipsoid Clarke1866         (6378206.400, 6356583.800);
//    const ReferenceEllipsoid NAD27              (6378206.400, 6356583.800);


//void _iterateECEF(double &_lat, double &_alt, double p, double z_, double x_, double y_, double z, ReferenceEllipsoid const &_ref, int iter=0) {
//    x_ *= _ref.A;
//    y_ *= _ref.B;
//    double alt = sqrt((z_-y_)*(z_-y_)+(p-x_)*(p-x_));
//    double sy = _ref.A2_B2 * y_;
//    double h = 1.0/sqrt(sy*sy + x_*x_);
//    double dz = z - y_ - alt * sy * h;
//    double dp = p - x_ - alt * x_ * h;
//    if (iter > 15) {
//        _lat = atan2(sy, x_);
//        _alt = alt;
//    } else {
//        y_ = _ref.A_B * (y_ + dz);
//        x_ = x_ + dp;
//        double hp = 1.0 / sqrt(y_*y_ + x_*x_);
//        _iterateECEF(_lat, _alt, p, z_, x_*hp, y_*hp, z, _ref, iter+1);
//    }
//}


//void SurfaceDistance(LLA const &p, LLA const &q, double &distance, double &bearing, ReferenceEllipsoid const &_ref)
//{
//    double U1 = atan2((1-_ref.f) * sin(p.latitude()), cos(p.latitude()));
//    double U2 = atan2((1-_ref.f) * sin(q.latitude()), cos(q.latitude()));
//    double s_U1 = sin(U1);
//    double c_U1 = cos(U1);
//    double s_U2 = sin(U2);
//    double c_U2 = cos(U2);
//    double psU = s_U1 * s_U2;
//    double pcU = c_U1 * c_U2;
//    double L = q.longitude() - p.longitude();
//    double lam = L;
//    double last = 100.0;
//    double s_lam;
//    double c_lam;
//    double t1;
//    double t2;
//    double s2_sig=0.0;
//    double c_sig=0.0;
//    double sig=0.0;
//    double s_sig;
//    double s_alp;
//    double c2_alp;
//    double c_2sigm=0.0;
//    double u;
//    double u2=0.0;
//    double c;
//    while (fabs(lam - last) > 0.00001) {
//        last = lam;
//        s_lam = sin(lam);
//        c_lam = cos(lam);
//        t1 = c_U2 * s_lam;
//        t2 = c_U1 * s_U2 - s_U1 * c_U2 * c_lam;
//        s2_sig = t1*t1 + t2*t2;
//        c_sig = s_U1 * s_U2 + c_U1 * c_U2 * c_lam;
//        sig = acos(c_sig);
//        s_sig = sqrt(s2_sig);
//        if (s2_sig == 0.0) {
//            if (pcU * s_lam > 0.0) {
//                s_alp = 1.0;
//            } else
//            if (pcU * s_lam < 0.0) {
//                s_alp = -1.0;
//            } else {
//                s_alp = 0.0;
//            }
//        } else {
//            s_alp = pcU * s_lam / s_sig;
//            s_alp = min(1.0, max(-1.0, s_alp));
//        }
//        c2_alp = 1.0 - s_alp*s_alp;
//        if (c2_alp == 0.0) {
//            if (psU > 0.0) {
//                c_2sigm = 1.0;
//            } else
//            if (psU < 0.0) {
//                c_2sigm = -1.0;
//            } else {
//                c_2sigm = 0.0;
//            }
//        } else {
//            c_2sigm = c_sig - 2.0 * psU / c2_alp;
//            c_2sigm = min(1.0, max(-1.0, c_2sigm));
//        }
//        u = cos(asin(s_alp));
//        u2 = u * u * (_ref.A2_B2 - 1);
//        c = _ref.f * c2_alp * (4.0 + _ref.f * (4.0 - 3.0 * c2_alp)) / 16.0;
//        lam = L + (1.0 - c) * _ref.f * s_alp * (sig + c * s_sig * (c_2sigm + c * c_sig * (-1.0 + 2.0 * c_2sigm * c_2sigm)));
//    }
//    double a = 1.0 + u2 * (64.0 + u2 * (-12.0 + 5.0 * u2)) / 256.0;
//    double b = u2 * (128.0 + u2 * (-64.0 + 37.0 * u2)) / 512.0;
//    double dsig = b * sqrt(s2_sig) * (c_2sigm + 0.25 * b * c_sig * (-1.0 + 2.0 * c_2sigm * c_2sigm));
//    distance = _ref.B * a * (sig - dsig);
//    bearing = atan2(c_U2 * sin(lam), c_U1 * s_U2 - s_U1 * c_U2 * cos(lam));
//}
//
//


//void ShellDistance(LLA const &p, LLA const &q, double &distance, double &bearing, ReferenceEllipsoid const &_ref)
//{
//    double da = p.altitude() - q.altitude();
//        SurfaceDistance(p, q, distance, bearing, _ref);
//    distance = sqrt(distance*distance + da*da);
//}


//CReferenceEllipsoid::CReferenceEllipsoid(double semi_major, double flattening_inv)
//{
//        this->setPara(semi_major,flattening_inv);
//}
//


//void CReferenceEllipsoid::setPara(double semi_major, double flattening_inv)
//{
//        A       = semi_major;
//        f       = 1.0/flattening_inv;
//        B       = A*(1-f);
//        R       = 6371010.0;
////      f       = (A-B)/A;          //flattening
//        e       = sqrt(2*f-f*f);        //the first eccentricity
//        A_B     = A/B;
//        B_A     = B/A;
//        B2_A2   = (B*B)/(A*A);
//        A2_B2   = 1.0 / B2_A2;
//        e2      = e*e;
//        e1      = (A-B)/(A+B);
//        ep      = sqrt(A*A-B*B)/B;  //the second eccentricity
//        ep2     = ep*ep;
//        // LLA2UTM constants used to calculate the length of arc of a meridian from equator to lat,P67
//        f8 m0,m2,m4,m6,m8;
//        m0      = A*(1-e2);
//        m2      = 3.0/2*e2*m0;
//        m4      = 5.0/4*e2*m2;
//        m6      = 7.0/6*e2*m4;
//        m8      = 9.0/8*e2*m6;
//        m_0     = m0+m2/2.0+(3.0/8)*m4+(5.0/16)*m6+(35.0/128)*m8;
//        m_1     = m2/2+m4/2+(15.0/32)*m6+(7.0/16)*m8;
//        m_2     = m4/8+(3.0/16)*m6+(7.0/32)*m8;
//        m_3     = m6/32.0+m8/16.0;
//
//        // UTM2LLA constants
//        m_f        = 1.0/(A*(1.0 - e2*(0.25 + e2*(0.046875 + e2*0.01953125))));
//        m_a        = e1 * (1.5 - 0.84375*e1*e1);
//        m_b        = e1 * e1 * (1.3125 - 1.71875*e1*e1);
//        m_c        = 1.5729166666667*e1*e1*e1;
//}
//


//CReferenceEllipsoid CReferenceEllipsoid::operator =(CReferenceEllipsoid right)
//{
//        this->setPara(right.A,1.0/right.f);
//        return *this;
//}
//


//bool CReferenceEllipsoid::operator == (CReferenceEllipsoid right)
//{
//        return (fabs(this->A - right.A)<1e-10 && fabs(this->f - right.f) < 1e-10);
//}
//
//



//ECEF GRIDtoECEF(GRID const &grid, const double k0/* =0.9996 */,
//                CReferenceEllipsoid const &_ref /* = GeoRef::WGS84 */)
//{
//    return LLAtoECEF(GRIDtoLLA(grid, k0, _ref), _ref);
//}
//


//GRID ECEFtoGRID(ECEF const &ecef, const double k0/* =0.9996 */,
//                CReferenceEllipsoid const &_ref /* = GeoRef::WGS84 */)
//{
//    return LLAtoGRID(ECEFtoLLA(ecef, _ref), k0,_ref);
//}
//


//LLA GRIDtoLLA(GRID const &grid, const double k0/* =0.9996 */,
//              CReferenceEllipsoid const &_ref /* = GeoRef::WGS84 */)
//{
//    // central-meridian scale factor
//    double nu, T, T2, S, C, CP, SP, R, D, D2, M;
//    double mu, phi;
//    double x, y;
//    double lon0 = grid.lon0();
//    x = grid.easting() - 500000.0; //remove 500,000 meter offset for longitude
//    y = grid.northing();
//
//    if (grid.NorS() == 'S')  {
//        y -= 10000000.0;  //remove 10,000,000 meter offset used for southern hemisphere
//    }
//
////  double lon0 = toRadians(((utm.zone() - 1) * 6.0 - 180.0 + 3.0));  //+3 puts origin in middle of zone
//
//    M = y / k0;
//
//    mu = M * _ref.m_f;
//
//    phi = mu + _ref.m_a*sin(2.0*mu) + _ref.m_b*sin(4.0*mu) + _ref.m_c*sin(6.0*mu);
//
//    C = cos(phi);
//    S = sin(phi);
//    T = S/C;
//    nu = _ref.A/sqrt(1.0-_ref.e2*S*S);
//    T2 = T * T;
//    CP = C * C * _ref.ep2;
//    SP = 1.0 - S * S * _ref.e2;
//    R = _ref.A * _ref.B2_A2 / (SP*sqrt(SP));
//    D = x/(nu*k0);
//    D2 = D*D;
//
//    double lat, lon;
//
//    lat = phi - (nu*T/R)*(D2*(0.5 - D2*((120.0+90.0*T2+CP*(300.0-120.0*CP)-270.0*_ref.ep2)
//            +(61.0+90.0*T2+298.0*CP+45.0*T2*T2-252.0*_ref.ep2-3.0*CP*CP)*D2)/720.0));
//
//    lon = D * ( 1.0 -  D2*( (1.0+2.0*T2+CP)/6.0 - ( 5.0 - CP*(2.0 + 3.0*CP)
//                                                        +  8.0*_ref.ep2
//                                                        +  T2*(28.0 + 24.0*T2)
//                                                  ) * D2/120.0
//                          )
//               ) / C;
//
//    lon += lon0;
//
//    return LLA(lat, lon, grid.altitude());
//}
//


//GRID LLAtoGRID(LLA const &lla,const double k0/* =0.9996 */,
//               CReferenceEllipsoid const &_ref /* = GeoRef::WGS84 */)
//{
//    // central-meridian scale factor
////  double k0 = 0.9996;     //k0=1:Gausse projection,=0.9996 GRID
//    double lon = lla.longitude();
//    double lat = lla.latitude();
//    double nu, T, T2, C, CP2, CP4, A, A2, A3, A4, M, S;
//
//    char _zone;
//    double lon0;
//    GRID::GetZoneAndCM(lon,lat,_zone,lon0);
//    //Make sure the longitude is between -180.00 .. 179.9
//    if (lon >= PI) {
//        int n = (int) (0.5 * lon / PI + 0.5);
//        lon -= n * 2.0 * PI;
//    } else
//    if (lon < -PI) {
//        int n = (int) (0.5 * lon / PI - 0.5);
//        lon -= n * 2.0 * PI;
//    }
//
//    S = sin(lat);
//    C = cos(lat);
//    T = S/C;                            //tanB
//    T2 = T * T;                         //tanB*tanB
//
//    nu = _ref.A/sqrt(1.0-_ref.e2*S*S);  //the radius of prime vertical
//    CP2 = _ref.ep2*C*C;                 //ep*ep*cosB*cosB
//    CP4 = CP2*CP2;
//
//    A = C*(lon - lon0);                 //cosB*l
//    A2 = A * A;
//    A3 = A2 * A;
//    A4 = A2 * A2;
//
//    // approximation for length of arc of a meridian from equator to lat,P72
//    M = _ref.m_0*lat
//        - S*C*((_ref.m_1-_ref.m_2 + _ref.m_3)
//                + (2.0*_ref.m_2-(16.0/3)*_ref.m_3)*S*S
//                + (16.0/3)*_ref.m_3*S*S*S*S);
//
//    double _easting, _northing;
//    //l<3.5degree, precision 0.001m.
//    _easting = k0 * nu * ( A +          //cosB*l
//                          (1.0 - T2 + CP2) * A3 / 6 +   //(1-t*t+cp2) * l^3 * cosB^3/6
//                          (5.0 - 18.0*T2 + T2*T2 + 14*CP2 - 58.0*T2*CP2) * A4 *A / 120.0
//                         ) + 500000.0;
//
//    _northing = k0 * ( M +
//                       nu * T * ( 0.5*A2 +              //1/2 * cosB^2 * l^2
//                                  (5.0 - T2 + 9.0*CP2 + 4.0*CP2*CP2)*A4/24.0 +
//                                  (61.0 -58.0*T2 + T2*T2 + 270.0*CP2 - 330.0*T2*CP2)*A4*A2/720.0
//                                )
//                     );
//
//    if (lat < 0.0) {
//        _northing += 10000000.0; //10000000 meter offset for southern hemisphere
//    }
//    char _designator = GRID::GetDesignator(lat);
//    return GRID(_easting, _northing, _zone, _designator, lla.altitude());
//}
//

//void SurfaceDistance(LLA const &p, LLA const &q, double &distance, double &bearing, CReferenceEllipsoid const &_ref)
//{
//    double U1 = atan2((1-_ref.f) * sin(p.latitude()), cos(p.latitude()));
//    double U2 = atan2((1-_ref.f) * sin(q.latitude()), cos(q.latitude()));
//    double s_U1 = sin(U1);
//    double c_U1 = cos(U1);
//    double s_U2 = sin(U2);
//    double c_U2 = cos(U2);
//    double psU = s_U1 * s_U2;
//    double pcU = c_U1 * c_U2;
//    double L = q.longitude() - p.longitude();
//    double lam = L;
//    double last = 100.0;
//    double s_lam;
//    double c_lam;
//    double t1;
//    double t2;
//    double s2_sig=0.0;
//    double c_sig=0.0;
//    double sig=0.0;
//    double s_sig;
//    double s_alp;
//    double c2_alp;
//    double c_2sigm=0.0;
//    double u;
//    double u2=0.0;
//    double c;
//    while (fabs(lam - last) > 0.00001) {
//        last = lam;
//        s_lam = sin(lam);
//        c_lam = cos(lam);
//        t1 = c_U2 * s_lam;
//        t2 = c_U1 * s_U2 - s_U1 * c_U2 * c_lam;
//        s2_sig = t1*t1 + t2*t2;
//        c_sig = s_U1 * s_U2 + c_U1 * c_U2 * c_lam;
//        sig = acos(c_sig);
//        s_sig = sqrt(s2_sig);
//        if (s2_sig == 0.0) {
//            if (pcU * s_lam > 0.0) {
//                s_alp = 1.0;
//            } else
//            if (pcU * s_lam < 0.0) {
//                s_alp = -1.0;
//            } else {
//                s_alp = 0.0;
//            }
//        } else {
//            s_alp = pcU * s_lam / s_sig;
//            s_alp = min(1.0, max(-1.0, s_alp));
//        }
//        c2_alp = 1.0 - s_alp*s_alp;
//        if (c2_alp == 0.0) {
//            if (psU > 0.0) {
//                c_2sigm = 1.0;
//            } else
//            if (psU < 0.0) {
//                c_2sigm = -1.0;
//            } else {
//                c_2sigm = 0.0;
//            }
//        } else {
//            c_2sigm = c_sig - 2.0 * psU / c2_alp;
//            c_2sigm = min(1.0, max(-1.0, c_2sigm));
//        }
//        u = cos(asin(s_alp));
//        u2 = u * u * (_ref.A2_B2 - 1);
//        c = _ref.f * c2_alp * (4.0 + _ref.f * (4.0 - 3.0 * c2_alp)) / 16.0;
//        lam = L + (1.0 - c) * _ref.f * s_alp * (sig + c * s_sig * (c_2sigm + c * c_sig * (-1.0 + 2.0 * c_2sigm * c_2sigm)));
//    }
//    double a = 1.0 + u2 * (64.0 + u2 * (-12.0 + 5.0 * u2)) / 256.0;
//    double b = u2 * (128.0 + u2 * (-64.0 + 37.0 * u2)) / 512.0;
//    double dsig = b * sqrt(s2_sig) * (c_2sigm + 0.25 * b * c_sig * (-1.0 + 2.0 * c_2sigm * c_2sigm));
//    distance = _ref.B * a * (sig - dsig);
//    bearing = atan2(c_U2 * sin(lam), c_U1 * s_U2 - s_U1 * c_U2 * cos(lam));
//}
//
//


//
//
//////////////////////////////////////////////////////////////////////////////////////
//// GRID
///**
// * Get the GRID designator for a given latitude, or 'Z' if outside
// * the GRID limits (80S to 84N)
// *
// * @param latitude latitude in radians
// */
//char GRID::GetDesignator(double latitude)
//{
//    static const char designator[] = "CDEFGHJKLMNPQRSTUVWXX";
//    latitude = toDegrees(latitude);
//    if (latitude < -80.0 || latitude > 84.0) return 'Z';
//    return designator[(int)(latitude + 80.0)>>3];
//}
////  //////////////////////////////////////////////////////////////////////////
////  /* UTM Zone 32 has been widened to 9¡ã(at the expense of zone 31) between latitudes 56¡ãand 64¡ã(band V)
////     to accommodate southwest Norway. Thus zone 32 it extends westwards to 3¡ãE in the North Sea.
////
////     Similarly, between 72¡ã and 84¡ã (band X), zones 33 and 35 have been widened to 12¡ã to accommodate Svalbard.
////     To compensate for these 12¡ãwide zones, zones 31 and 37 are widened to 9¡ã and zones 32, 34, and 36 are eliminated.
////     Thus the W and E boundaries of zones are 31: 0 - 9 E, 33: 9 - 21 E, 35: 21 - 33 E and 37: 33 - 42 E.
////  */
//void GRID::GetZoneAndCM(double lon, double lat,char& zone,double& lon0)
//{
//    if (lat >= 0.9773843811168 && lat < 1.1170107212764 &&
//        lon >= 0.0523598775598 && lon < 0.2094395102393) {
//        zone = 32;
//        lon0 = 0.1308996938996;     //7.5degree
//    }
//    // special zones for Svalbard, lat 72 - 84
//    else if( lat >= 1.2566370614359 && lat < 1.4660765716752) {
//        if (lon < 0.0) {
//        } else
//        if (lon < 0.157079632679490) { // 0 - 9 deg
//            zone = 31;
//            lon0 = 0.078539816339744;   //4.5degree
//        } else
//        if (lon < 0.366519142918809) { // 9 - 21 deg
//            zone = 33;
//            lon0 = 0.261799387799149;   //15degree
//        } else
//        if (lon < 0.575958653158129) { // 21 - 33 deg
//            zone = 35;
//            lon0 = 0.471238898038469;   //27degree
//        } else
//        if (lon < 0.733038285837618) { // 33 - 42 deg
//            zone = 37;
//            lon0 = 0.654498469497874;   //37.5degree
//        }
//    }
//    else{
//        zone = char((lon / PI + 1.0) * 30.0) + 1;
//        lon0 = toRadians((int(zone) - 1)*6.0 - 180.0 + 3.0);
//    }
//
//}
//
//void GRID::Set(double easting_, double northing_, const double lon0,
//               double alt /* = 0.0 */, const char NorS/* ='N' */)
//{
//    _zone=0;
//    _designator='Z';
//    _E = easting_;
//    _N = northing_;
//    _alt = alt;
//    _NorS = NorS;
//    _lon0 = lon0;
//
//}
//void GRID::Get(double& easting, double& northing,char& zone, double& alt)
//{
//    easting = this->easting();
//    northing = this->northing();
//    alt = this->altitude();
//    zone = this->zone();
//}
//
//bool GRID::valid() const {
//    if (!strchr("CDEFGHJKLMNPQRSTUVWXX", _designator)) {
//        return false;
//    }
//    // check ZONE
//    return true;
//}
//
//std::string GRID::asString() const
//{
//    std::ostringstream ss;
//    ss << std::fixed;
//    ss << "[";
//    ss << ss.precision(0) << _E << " " << _N;
//    ss << " " << int(_zone) << _designator << ", ";
//    ss << std::setprecision(3) << _alt;
//    ss << "]";
//    return ss.str();
//}
//
//void GRID::parseXML(const char *cdata)
//{
//    if (cdata) {
//        const char *c = cdata;
//        while (*c != 0 && (*c == ' ' || *c == '\t' || *c == '\r' || *c == '\n')) c++;
//        int zone_;
//        char designator_;
//        int n = sscanf(c, "%lf %lf %d%c %lf", &_E, &_N, &zone_, &designator_, &_alt);
//        if (n != 5) throw std::string("SYNTAX ERROR: expecting 'easting northing zone altitude'");
//        _zone = static_cast<char>(zone_);
//        _designator = static_cast<char>(toupper(designator_));
//        if (!valid()) {
//            throw std::string("SYNTAX ERROR: invalid GRID code");
//        }
//    } else throw std::string("SYNTAX ERROR: empty vector");
//}
//
//#ifdef WIN32
//void GRID::serialize(CArchive* ar) {
//    if(ar->IsLoading())
//        (*ar) >> _E >> _N >> _zone >> _designator >> _alt;
//    else
//        (*ar) << _E << _N << _zone << _designator << _alt;
//}
//#endif
//std::string LLA::asString() const
//{
//    std::ostringstream ss;
//    ss << std::fixed << std::setprecision(3);
//    ss << "[" << toDegrees(_lat)
//       << " " << toDegrees(_lon)
//       << ", " << _alt
//       << "]";
//    return ss.str();
//}

//void LLA::SetInDegrees(double lat, double lon, double alt) {
//    _lat = toRadians(lat);
//    _lon = toRadians(lon);
//    _alt = alt;
//}
//
//void LLA::GetInDegrees(double& lat, double& lon, double& alt){
//    lat = latitudeInDegrees();
//    lon = longitudeInDegrees();
//    alt = _alt;
//}
//
//void LLA::Get(double& lat, double& lon,double& alt,char unittype){
//    switch(unittype) {
//    case 0:
//        break;
//    case 1:
//        this->GetInDegrees(lat,lon,alt);
//        break;
//    case 2:
//        lat=_lat;lon=_lon;alt=_alt;
//        break;
//    case 3:
//        this->GetInDegrees(lat,lon,alt);
//        lat *= 3600;
//        lon *= 3600;
//        break;
//    }
//}
//
//void LLA::Set(double lat, double lon, double alt,char unittype) {
//    switch(unittype) {
//    case 0:
//        break;
//    case 1:
//        SetInDegrees(lat,lon,alt);
//        break;
//    case 2:
//        Set(lat,lon,alt);
//        break;
//    case 3:
//        SetInDegrees(lat/3600,lon/3600,alt/3600);
//        break;
//    }
//}
//
//void LLA::Set(double lat, double lon, double alt/* =0.0  */)
//{
//    _lat = lat;
//    _lon = lon;
//    _alt = alt;
//}
