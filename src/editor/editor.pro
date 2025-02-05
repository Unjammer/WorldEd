include(../../PZWorldEd.pri)
include(../libtiled/libtiled.pri)
include(../qtlockedfile/qtlockedfile.pri)
include(../lua/lua.pri)
include(../quazip-1.1/quazip/quazip.pri)
include(../zlib/zlib.pri)

QT       += core gui xml
contains(QT_CONFIG, opengl): QT += opengl

greaterThan(QT_MAJOR_VERSION, 5) {
    QT += openglwidgets
}

# MSVC
win32 {
    QMAKE_CFLAGS_RELEASE += -Zi
    QMAKE_CXXFLAGS_RELEASE += -Zi
    QMAKE_LFLAGS_RELEASE += /DEBUG /OPT:REF
}

TARGET = PZWorldEd
TEMPLATE = app
#target.path = $${PREFIX}/bin
#INSTALLS += target
win32 {
    DESTDIR = ../..
} else {
    DESTDIR = ../../bin
}

DEFINES += QT_NO_CAST_FROM_ASCII \
    QT_NO_CAST_TO_ASCII

# Release with debug info
msvc:QMAKE_CXXFLAGS_RELEASE += /Zi
msvc:QMAKE_LFLAGS_RELEASE += /DEBUG /OPT:REF /OPT:ICF

macx {
    QMAKE_LIBDIR_FLAGS += -L$$OUT_PWD/../../bin/PZWorldEd.app/Contents/Frameworks
    LIBS += -framework Foundation
} else:win32 {
    LIBS += -L$$OUT_PWD/../../lib
} else {
    QMAKE_LIBDIR_FLAGS += -L$$OUT_PWD/../../lib
}

# Make sure the Tiled executable can find libtiled
!win32:!macx {
    QMAKE_RPATHDIR += \$\$ORIGIN/../lib

    # It is not possible to use ORIGIN in QMAKE_RPATHDIR, so a bit manually
    QMAKE_LFLAGS += -Wl,-z,origin \'-Wl,-rpath,$$join(QMAKE_RPATHDIR, ":")\'
    QMAKE_RPATHDIR =
}

MOC_DIR = .moc
UI_DIR = .uic
RCC_DIR = .rcc
OBJECTS_DIR = .obj

SOURCES += main.cpp\
    ImageProcessor.cpp \
    biomemapgeneratorDialog.cpp \
    exportlotsprogressdialog.cpp \
    generatelotsfailuredialog.cpp \
    loadthumbnailsdialog.cpp \
    logger.cpp \
    lotfilesmanager256.cpp \
        mainwindow.cpp \
    InGameMap/clipper.cpp \
    InGameMap/ingamemapcell.cpp \
    InGameMap/ingamemapdock.cpp \
    InGameMap/ingamemapfeaturegenerator.cpp \
    InGameMap/ingamemapimagedialog.cpp \
    InGameMap/ingamemapimagepyramidwindow.cpp \
    InGameMap/ingamemappropertiesform.cpp \
    InGameMap/ingamemappropertydialog.cpp \
    InGameMap/ingamemapreader.cpp \
    InGameMap/ingamemapscene.cpp \
    InGameMap/ingamemapundo.cpp \
    InGameMap/ingamemapwriter.cpp \
    InGameMap/ingamemapwriterbinary.cpp \
    navigation/chunkdatafile256.cpp \
    navigation/isochunk256.cpp \
    navigation/isogridsquare256.cpp \
    pngzonesdialog.cpp \
    tiledeftextfile.cpp \
    tilesetstxtfile.cpp \
    worldview.cpp \
    worldscene.cpp \
    world.cpp \
    worlddocument.cpp \
    worldcell.cpp \
    cellview.cpp \
    cellscene.cpp \
    document.cpp \
    documentmanager.cpp \
    celldocument.cpp \
    mapcomposite.cpp \
    mapsdock.cpp \
    preferences.cpp \
    mapimagemanager.cpp \
    undoredo.cpp \
    undodock.cpp \
    mapmanager.cpp \
    basegraphicsview.cpp \
    progress.cpp \
    writeroomtonesdialog.cpp \
    zoomable.cpp \
    scenetools.cpp \
    worldwriter.cpp \
    worldreader.cpp \
    propertiesdock.cpp \
    propertydefinitionsdialog.cpp \
    templatesdialog.cpp \
    basegraphicsscene.cpp \
    lotsdock.cpp \
    worldcellobject.cpp \
    objectsdock.cpp \
    toolmanager.cpp \
    properties.cpp \
    objecttypesdialog.cpp \
    luatablewriter.cpp \
    luawriter.cpp \
    layersmodel.cpp \
    layersdock.cpp \
    preferencesdialog.cpp \
    objectgroupsdialog.cpp \
    colorbutton.cpp \
    copypastedialog.cpp \
    clipboard.cpp \
    lotfilesmanager.cpp \
    road.cpp \
    roadsdock.cpp \
    simplefile.cpp \
    bmptotmx.cpp \
    bmptotmxdialog.cpp \
    generatelotsdialog.cpp \
    filesystemwatcher.cpp \
    bmptotmxconfirmdialog.cpp \
    resizeworlddialog.cpp \
    newworlddialog.cpp \
    tilemetainfomgr.cpp \
    tilesetmanager.cpp \
    BuildingEditor/furnituregroups.cpp \
    BuildingEditor/buildingtmx.cpp \
    BuildingEditor/buildingtiles.cpp \
    BuildingEditor/buildingobjects.cpp \
    BuildingEditor/buildingmap.cpp \
    BuildingEditor/buildingfloor.cpp \
    BuildingEditor/building.cpp \
    BuildingEditor/buildingwriter.cpp \
    BuildingEditor/buildingreader.cpp \
    BuildingEditor/buildingroomdef.cpp \
    BuildingEditor/buildingtemplates.cpp \
    threads.cpp \
    bmpblender.cpp \
    lotpackwindow.cpp \
    chunkmap.cpp \
    fromtodialog.cpp \
    unknowncolorsdialog.cpp \
    gotodialog.cpp \
    spawntooldialog.cpp \
    propertyenumdialog.cpp \
    writespawnpointsdialog.cpp \
    mapbuildings.cpp \
    pngbuildingdialog.cpp \
    tiledeffile.cpp \
    lootwindow.cpp \
    sceneoverlay.cpp \
    writeworldobjectsdialog.cpp \
    tmxtobmp.cpp \
    tmxtobmpdialog.cpp \
    navigation/isochunk.cpp \
    navigation/isogridsquare.cpp \
    navigation/chunkdatafile.cpp \
    searchdock.cpp \
    defaultsfile.cpp \
    BuildingEditor/roofhiding.cpp \
    waterflow.cpp

HEADERS  += mainwindow.h \
    ImageProcessor.h \
    biomemapgeneratorDialog.h \
    exportlotsprogressdialog.h \
    generatelotsfailuredialog.h \
    InGameMap/clipper.hpp \
    InGameMap/ingamemapcell.h \
    InGameMap/ingamemapdock.h \
    InGameMap/ingamemapfeaturegenerator.h \
    InGameMap/ingamemapimagedialog.h \
    InGameMap/ingamemapimagepyramidwindow.h \
    InGameMap/ingamemappropertiesform.h \
    InGameMap/ingamemappropertydialog.h \
    InGameMap/ingamemapreader.h \
    InGameMap/ingamemapscene.h \
    InGameMap/ingamemapundo.h \
    InGameMap/ingamemapwriter.h \
    InGameMap/ingamemapwriterbinary.h \
    loadthumbnailsdialog.h \
    logger.h \
    lotfilesmanager256.h \
    navigation/chunkdatafile256.h \
    navigation/isochunk256.h \
    navigation/isogridsquare256.h \
    pngzonesdialog.h \
    tiledeftextfile.h \
    tilesetstxtfile.h \
    worldconstants.h \
    worldview.h \
    worldscene.h \
    world.h \
    worlddocument.h \
    worldcell.h \
    cellview.h \
    cellscene.h \
    document.h \
    documentmanager.h \
    celldocument.h \
    mapcomposite.h \
    mapsdock.h \
    preferences.h \
    mapimagemanager.h \
    undoredo.h \
    undodock.h \
    mapmanager.h \
    basegraphicsview.h \
    progress.h \
    writeroomtonesdialog.h \
    zoomable.h \
    scenetools.h \
    worldwriter.h \
    worldreader.h \
    propertiesdock.h \
    propertydefinitionsdialog.h \
    templatesdialog.h \
    basegraphicsscene.h \
    lotsdock.h \
    objectsdock.h \
    toolmanager.h \
    objecttypesdialog.h \
    luatablewriter.h \
    luawriter.h \
    layersmodel.h \
    layersdock.h \
    preferencesdialog.h \
    objectgroupsdialog.h \
    colorbutton.h \
    copypastedialog.h \
    clipboard.h \
    lotfilesmanager.h \
    road.h \
    roadsdock.h \
    simplefile.h \
    bmptotmx.h \
    bmptotmxdialog.h \
    generatelotsdialog.h \
    filesystemwatcher.h \
    bmptotmxconfirmdialog.h \
    resizeworlddialog.h \
    newworlddialog.h \
    tilemetainfomgr.h \
    tilesetmanager.h \
    BuildingEditor/furnituregroups.h \
    BuildingEditor/buildingtmx.h \
    BuildingEditor/buildingtiles.h \
    BuildingEditor/buildingobjects.h \
    BuildingEditor/buildingmap.h \
    BuildingEditor/buildingfloor.h \
    BuildingEditor/building.h \
    BuildingEditor/buildingwriter.h \
    BuildingEditor/buildingreader.h \
    BuildingEditor/buildingroomdef.h \
    BuildingEditor/buildingtemplates.h \
    threads.h \
    bmpblender.h \
    lotpackwindow.h \
    chunkmap.h \
    fromtodialog.h \
    unknowncolorsdialog.h \
    gotodialog.h \
    spawntooldialog.h \
    propertyenumdialog.h \
    worldproperties.h \
    writespawnpointsdialog.h \
    mapbuildings.h \
    pngbuildingdialog.h \
    tiledeffile.h \
    lootwindow.h \
    sceneoverlay.h \
    writeworldobjectsdialog.h \
    tmxtobmp.h \
    tmxtobmpdialog.h \
    navigation/isochunk.h \
    navigation/isogridsquare.h \
    navigation/chunkdatafile.h \
    searchdock.h \
    defaultsfile.h \
    BuildingEditor/roofhiding.h \
    waterflow.h

FORMS    += mainwindow.ui \
    biomemapgenerator.ui \
    exportlotsprogressdialog.ui \
    generatelotsfailuredialog.ui \
    InGameMap/ingamemapimagedialog.ui \
    InGameMap/ingamemapimagepyramidwindow.ui \
    InGameMap/ingamemappropertiesform.ui \
    InGameMap/ingamemappropertydialog.ui \
    loadthumbnailsdialog.ui \
    pngzonesdialog.ui \
    propertiesview.ui \
    propertiesdialog.ui \
    templatesdialog.ui \
    objecttypesdialog.ui \
    preferencesdialog.ui \
    objectgroupsdialog.ui \
    copypastedialog.ui \
    bmptotmxdialog.ui \
    generatelotsdialog.ui \
    bmptotmxconfirmdialog.ui \
    resizeworlddialog.ui \
    newworlddialog.ui \
    lotpackwindow.ui \
    fromtodialog.ui \
    unknowncolorsdialog.ui \
    gotodialog.ui \
    spawntooldialog.ui \
    propertyenumdialog.ui \
    writeroomtonesdialog.ui \
    writespawnpointsdialog.ui \
    pngbuildingdialog.ui \
    lootwindow.ui \
    writeworldobjectsdialog.ui \
    tmxtobmpdialog.ui \
    searchdock.ui

OTHER_FILES +=

RESOURCES += \
    editor.qrc

win32 {
    RC_FILE = worlded.rc
}

win32:INCLUDEPATH += .

isEmpty(INSTALL_ONLY_BUILD) {
    win32:CONFIG_PREFIX = $${target.path}
    unix:CONFIG_PREFIX = $${target.path}/../share/tilezed/config
    macx:CONFIG_PREFIX = $${target.path}/PZWorldEd.app/Contents/Config
} else {
    win32:CONFIG_PREFIX = $${top_builddir}
    unix:CONFIG_PREFIX = $${top_builddir}/share/tilezed/config
    macx:CONFIG_PREFIX = $${top_builddir}/bin/PZWorldEd.app/Contents/Config
}

configTxtFiles.path = $${CONFIG_PREFIX}
configTxtFiles.files = \
    $${top_srcdir}/Blends.txt \
    $${top_srcdir}/MapBaseXML.txt \
    $${top_srcdir}/MapToPNG.txt \
    $${top_srcdir}/Rules.txt \
    $${top_srcdir}/WorldDefaults.txt
INSTALLS += configTxtFiles
