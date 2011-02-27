#ifndef CWAYPOINTS_H
#define CWAYPOINTS_H
struct ECEF
{
    double ecefX;
    double ecefY;
    double ecefZ;
};

struct geoDetic
{
    double lon;
    double lat;
    double alt;
};

struct wayP
{
    geoDetic geo;
    ECEF ecef;
};



class cWayPoints
{
public:
    cWayPoints();
    ~cWayPoints();

    void setWayPoint(int num,double lon,double lat,double alt );
    geoDetic getGeodetic(int num);
    ECEF getECEF(int num);
    geoDetic getECEF2Geo(double x,double y,double z);
    ECEF getGeo2ECEF(double lon,double lat, double alt);

private:
    void setGeodetic(int num,double lon,double lat,double alt );
    void setECEF(int num,double x,double y,double z);

};

#endif // WAYPOINTS_H
