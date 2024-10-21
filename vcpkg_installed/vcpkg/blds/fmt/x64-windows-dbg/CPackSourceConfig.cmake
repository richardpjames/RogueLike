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
set(CPACK_BINARY_INNOSETUP "OFF")
set(CPACK_BINARY_NSIS "ON")
set(CPACK_BINARY_NUGET "OFF")
set(CPACK_BINARY_WIX "OFF")
set(CPACK_BINARY_ZIP "OFF")
set(CPACK_BUILD_SOURCE_DIRS "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/src/10.2.1-a991065f88.clean;C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/x64-windows-dbg")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "FMT built using CMake")
set(CPACK_GENERATOR "ZIP")
set(CPACK_IGNORE_FILES ".*[.]a$;.*[.]a/;.*[.]so.*$;.*[.]so.*/;.*[.]xcodeproj$;.*[.]xcodeproj/;.*~$;.*~/;[.]vscode/$;[.]vscode//;/CMakeScripts$;/CMakeScripts/;/Testing$;/Testing/;/_CPack_Packages$;/_CPack_Packages/;/doc/doxyxml$;/doc/doxyxml/;/doc/node_modules$;/doc/node_modules/;/install_manifest[.]txt$;/install_manifest[.]txt/;CMakeCache[.]txt$;CMakeCache[.]txt/;CMakeFiles$;CMakeFiles/;CPack.*[.]cmake$;CPack.*[.]cmake/;CTestTestfile[.]cmake$;CTestTestfile[.]cmake/;FMT[.]build$;FMT[.]build/;Makefile$;Makefile/;bin/$;bin//;build/$;build//;cmake_install[.]cmake$;cmake_install[.]cmake/;fmt-.*[.]cmake$;fmt-.*[.]cmake/;fmt[.]pc$;fmt[.]pc/;virtualenv$;virtualenv/;/.git;/breathe;/format-benchmark;sphinx/;.buildinfo;.doctrees")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALLED_DIRECTORIES "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/src/10.2.1-a991065f88.clean;/")
set(CPACK_INSTALL_CMAKE_PROJECTS "")
set(CPACK_INSTALL_PREFIX "C:/dev/RogueLike/vcpkg_installed/vcpkg/pkgs/fmt_x64-windows/debug")
set(CPACK_MODULE_PATH "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/src/10.2.1-a991065f88.clean/support/cmake")
set(CPACK_NSIS_DISPLAY_NAME "fmt 10.2.1")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES64")
set(CPACK_NSIS_PACKAGE_NAME "fmt 10.2.1")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/x64-windows-dbg/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "FMT built using CMake")
set(CPACK_PACKAGE_FILE_NAME "fmt-10.2.1")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "fmt 10.2.1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "fmt 10.2.1")
set(CPACK_PACKAGE_NAME "fmt")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "10.2.1")
set(CPACK_PACKAGE_VERSION_MAJOR "10")
set(CPACK_PACKAGE_VERSION_MINOR "2")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_RESOURCE_FILE_LICENSE "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/share/cmake-3.29/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/src/10.2.1-a991065f88.clean/README.md")
set(CPACK_RESOURCE_FILE_WELCOME "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/share/cmake-3.29/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_PACKAGE_SOURCES "ON")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES ".*[.]a$;.*[.]a/;.*[.]so.*$;.*[.]so.*/;.*[.]xcodeproj$;.*[.]xcodeproj/;.*~$;.*~/;[.]vscode/$;[.]vscode//;/CMakeScripts$;/CMakeScripts/;/Testing$;/Testing/;/_CPack_Packages$;/_CPack_Packages/;/doc/doxyxml$;/doc/doxyxml/;/doc/node_modules$;/doc/node_modules/;/install_manifest[.]txt$;/install_manifest[.]txt/;CMakeCache[.]txt$;CMakeCache[.]txt/;CMakeFiles$;CMakeFiles/;CPack.*[.]cmake$;CPack.*[.]cmake/;CTestTestfile[.]cmake$;CTestTestfile[.]cmake/;FMT[.]build$;FMT[.]build/;Makefile$;Makefile/;bin/$;bin//;build/$;build//;cmake_install[.]cmake$;cmake_install[.]cmake/;fmt-.*[.]cmake$;fmt-.*[.]cmake/;fmt[.]pc$;fmt[.]pc/;virtualenv$;virtualenv/;/.git;/breathe;/format-benchmark;sphinx/;.buildinfo;.doctrees")
set(CPACK_SOURCE_INSTALLED_DIRECTORIES "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/src/10.2.1-a991065f88.clean;/")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/x64-windows-dbg/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "fmt-10.2.1")
set(CPACK_SOURCE_TOPLEVEL_TAG "win64-Source")
set(CPACK_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "win64")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "win64-Source")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "C:/dev/RogueLike/vcpkg_installed/vcpkg/blds/fmt/x64-windows-dbg/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
