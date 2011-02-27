######################################################################
# Install paths
######################################################################

OBJECTS_DIR  = obj
MOC_DIR      = moc
INCLUDEPATH += qwt/src
DEPENDPATH  += qwt/src

VER_MAJ      = 5
VER_MIN      = 2
VER_PAT      = 1
VERSION      = $${VER_MAJ}.$${VER_MIN}.$${VER_PAT}

######################################################################
# qmake internal options
######################################################################

CONFIG           += qt     # Also for Qtopia Core!
CONFIG           += warn_on
CONFIG           += thread

######################################################################
# release/debug mode
# If you want to build both DEBUG_SUFFIX and RELEASE_SUFFIX
# have to differ to avoid, that they overwrite each other.
######################################################################

VVERSION = $$[QT_VERSION]
isEmpty(VVERSION) {

    # Qt 3
    CONFIG           += release     # release/debug
}
else {
    # Qt 4
    win32 {
        # On Windows you can't mix release and debug libraries.
        # The designer is built in release mode. If you like to use it
        # you need a release version. For your own application development you
        # might need a debug version.
        # Enable debug_and_release + build_all if you want to build both.

        CONFIG           += debug     # release/debug/debug_and_release
        #CONFIG           += debug_and_release
        #CONFIG           += build_all
    }
    else {
        CONFIG           += debug     # release/debug
    }
}

######################################################################
# If you want to have different names for the debug and release
# versions you can add a suffix rule below.
######################################################################

DEBUG_SUFFIX        =
RELEASE_SUFFIX      =

win32 {
    DEBUG_SUFFIX      = d
}

TEMPLATE     = app


QWTLIB       = qwt

win32 {

    win32-msvc:LIBS  += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-msvc.net:LIBS  += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-msvc2002:LIBS += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-msvc2003:LIBS += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-msvc2005:LIBS += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-msvc2008:LIBS += $${QWT_ROOT}/lib/$${QWTLIB}.lib
    win32-g++:LIBS   += -L$${QWT_ROOT}/lib -l$${QWTLIB}5
}
else {
    LIBS        += -L$${QWT_ROOT}/lib -l$${QWTLIB}
}

CONFIG       += QwtPlot
CONFIG       += QwtWidgets
