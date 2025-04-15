cmake_minimum_required(VERSION 3.16)

project(Trivia_LP2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_generate_moc(main.cpp main.moc TARGET appTrivia_LP2)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appTrivia_LP2
    main.cpp
)

qt_add_qml_module(appTrivia_LP2
    URI Trivia_LP2
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES
        RESOURCES
        SOURCES
        SOURCES handlers.h
        SOURCES archivosJson.h
        SOURCES archivosJson.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appTrivia_LP2 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appTrivia_LP2
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appTrivia_LP2
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appTrivia_LP2
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
