

cmake_minimum_required(VERSION 3.5)

project(SDI-Assignment-GUI-Design LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Sql REQUIRED)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)


if(ANDROID)
  add_library(SDI-Assignment-GUI-Design SHARED
    main.cpp
    welcomewindow.cpp
    welcomewindow.h
    welcomewindow.ui
    cargo_registration.cpp
    cargo_registration.h
    cargo_registration.ui
    company_registration.cpp
    company_registration.h
    company_registration.ui
    driver_registration.cpp
    driver_registration.h
    driver_registration.ui
    owner_interface.cpp
    owner_interface.h
    owner_interface.ui
  )
else()
  add_executable(SDI-Assignment-GUI-Design
    main.cpp
    welcomewindow.cpp
    welcomewindow.h
    welcomewindow.ui
    cargo_registration.cpp
    cargo_registration.ui
    cargo_registration.h    
    company_registration.cpp
    company_registration.h
    company_registration.ui
    driver_registration.cpp
    driver_registration.h
    driver_registration.ui
    owner_interface.cpp
    owner_interface.h
    owner_interface.ui
    company_interface.cpp
    company_interface.h
    company_interface.ui
    driver_interface.cpp
    driver_interface.h
    driver_interface.ui
    owner_profile.cpp
    owner_profile.h
    owner_profile.ui
    owner_placecargo.cpp
    owner_placecargo.h
    owner_placecargo.ui
    owner_orderhistory.cpp
    owner_orderhistory.h
    owner_orderhistory.ui
    driver_profile.cpp
    driver_profile.h
    driver_profile.ui
    driver_lorryregistration.cpp
    driver_lorryregistration.h
    driver_lorryregistration.ui
    chat_window.cpp
    chat_window.h
    chat_window.ui
    modify_lorry.cpp
    modify_lorry.h
    modify_lorry.ui
    company_cargosettings.cpp
    company_cargosettings.h
    company_cargosettings.ui
    driver_cargosubmission.cpp
    driver_cargosubmission.h
    driver_cargosubmission.ui
    driver_acceptedcargos.cpp
    driver_acceptedcargos.h
    driver_acceptedcargos.ui
  )
endif()

target_link_libraries(SDI-Assignment-GUI-Design PRIVATE Qt5::Widgets Qt5::Sql)
