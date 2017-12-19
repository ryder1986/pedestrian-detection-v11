include(../pedestrian.pri)
    INCLUDEPATH += \
    $$COMMON_INCLUDE_PATH
#    LIBS+=\
#    $$COMMON_LIB_PATH/libtools.a

SOURCES += \
    main.cpp
CONFIG+=c++11

message($$absolute_path())
message($$DESTDIR)
