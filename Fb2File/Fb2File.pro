QT -= core
QT -= gui

VERSION = 0.0.0.1
TARGET = Fb2File
TEMPLATE = lib

CONFIG += shared
CONFIG += plugin

CONFIG += core_static_link_libstd

DEFINES += FB2FILE_USE_DYNAMIC_LIBRARY

CORE_ROOT_DIR = $$PWD/../../core
PWD_ROOT_DIR = $$PWD
include($$CORE_ROOT_DIR/Common/base.pri)

ADD_DEPENDENCY(kernel)

SOURCES += Fb2File.cpp

HEADERS += Fb2File.h