include(../pedestrian.pri)
HEADERS += \
    tools.h

SOURCES += \
    tools.cpp

TEMPLATE=lib
TARGET=tools

CONFIG += static

unix{
    QMAKE_CXXFLAGS+="--std=c++11"
#    target.path = /root/repo-github/res/common/lib-linux32
#    INSTALLS += target

   head_install_setting.path=$$COMMON_INCLUDE_PATH
   head_install_setting.files=tools.h

   lib_install_setting.path=$$COMMON_LIB_PATH
   lib_install_setting.files=libtools.a

   INSTALLS +=head_install_setting
   INSTALLS +=lib_install_setting

}
win32{
    target.path = Z:\res\common\lib-win32
    INSTALLS += target
}


#!exists( main.cpp ) {
#    error( "No main.cpp file found" )
#}
