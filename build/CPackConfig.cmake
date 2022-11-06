# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "ON")
set(CPACK_BINARY_NUGET "OFF")
set(CPACK_BINARY_WIX "OFF")
set(CPACK_BINARY_ZIP "OFF")
set(CPACK_BUILD_SOURCE_DIRS "F:/Users/Amstel/sources/repos/Empyre;F:/Users/Amstel/sources/repos/Empyre/build")
set(CPACK_CMAKE_GENERATOR "MinGW Makefiles")
set(CPACK_COMPONENTS_ALL "")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "F:/Program Files/CMake/share/cmake-3.21/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "Empyre built using CMake")
set(CPACK_GENERATOR "NSIS")
set(CPACK_INSTALL_CMAKE_PROJECTS "F:/Users/Amstel/sources/repos/Empyre/build;Empyre;ALL;/")
set(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/Empyre")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "Empyre 0.1.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "Empyre 0.1.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "F:/Users/Amstel/sources/repos/Empyre/build/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "F:/Program Files/CMake/share/cmake-3.21/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Empyre built using CMake")
set(CPACK_PACKAGE_FILE_NAME "Empyre-0.1.0-win32")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "Empyre 0.1.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "Empyre 0.1.0")
set(CPACK_PACKAGE_NAME "Empyre")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PROJECT_NAME "Empyre")
set(CPACK_PROJECT_VERSION "0.1.0")
set(CPACK_RESOURCE_FILE_LICENSE "F:/Program Files/CMake/share/cmake-3.21/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "F:/Program Files/CMake/share/cmake-3.21/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "F:/Program Files/CMake/share/cmake-3.21/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "F:/Users/Amstel/sources/repos/Empyre/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_SYSTEM_NAME "win32")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "win32")
set(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "F:/Users/Amstel/sources/repos/Empyre/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
