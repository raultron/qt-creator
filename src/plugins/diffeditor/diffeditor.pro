DEFINES += DIFFEDITOR_LIBRARY
include(../../qtcreatorplugin.pri)

HEADERS += diffeditor_global.h \
        diffeditor.h \
        diffeditorconstants.h \
        diffeditorcontroller.h \
        diffeditordocument.h \
        diffeditorfactory.h \
        diffeditormanager.h \
        diffeditorplugin.h \
        differ.h \
        diffutils.h \
        diffview.h \
        selectabletexteditorwidget.h \
        sidebysidediffeditorwidget.h \
        unifieddiffeditorwidget.h

SOURCES += diffeditor.cpp \
        diffeditorcontroller.cpp \
        diffeditordocument.cpp \
        diffeditorfactory.cpp \
        diffeditormanager.cpp \
        diffeditorplugin.cpp \
        differ.cpp \
        diffutils.cpp \
        diffview.cpp \
        selectabletexteditorwidget.cpp \
        sidebysidediffeditorwidget.cpp \
        unifieddiffeditorwidget.cpp

RESOURCES += diffeditor.qrc
