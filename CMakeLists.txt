cmake_minimum_required(VERSION 3.16)

project(QTTriviaLP2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Core)

set(PROJECT_SOURCES
        main.cpp



)
set(FILES_QSS
    styles.qss
)

source_group("Estilos" FILES ${FILES_QSS})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QTTriviaLP2
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ventanausuario.h ventanausuario.cpp ventanausuario.ui
        classusuario.h classusuario.cpp
        ventanalistausuario.h ventanalistausuario.cpp ventanalistausuario.ui
        ventanaeditarusuario.h ventanaeditarusuario.cpp ventanaeditarusuario.ui
        menumain.h menumain.cpp menumain.ui
        preguntas.h preguntas.cpp
        ventanacrearpreguntas.h ventanacrearpreguntas.cpp ventanacrearpreguntas.ui
        ventanalistarpreguntas.h ventanalistarpreguntas.cpp ventanalistarpreguntas.ui
        ventanalistarcategorias.h ventanalistarcategorias.cpp ventanalistarcategorias.ui
        lectorjson.h lectorjson.cpp
        ventanaeditarpreguntas.h ventanaeditarpreguntas.cpp ventanaeditarpreguntas.ui



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QTTriviaLP2 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(QTTriviaLP2 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QTTriviaLP2
            ${PROJECT_SOURCES}
            ${FILES_QSS}
        )
    endif()
endif()

target_link_libraries(QTTriviaLP2 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core)



# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QTTriviaLP2)
endif()
set_target_properties(QTTriviaLP2 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QTTriviaLP2
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QTTriviaLP2)
endif()
