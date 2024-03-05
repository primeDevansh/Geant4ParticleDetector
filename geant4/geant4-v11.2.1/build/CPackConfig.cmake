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


set(CPACK_BUILD_SOURCE_DIRS "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1;/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "Development;Examples;Runtime;Unspecified")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "cmake, make, g++")
set(CPACK_DEBIAN_PACKAGE_GENERATE_SHLIBS "TRUE")
set(CPACK_DEBIAN_PACKAGE_GENERATE_SHLIBS_POLICY "=")
set(CPACK_DEBIAN_PACKAGE_RECOMMENDS "libexpat1-dev, libxerces-c-dev, zlib1g-dev")
set(CPACK_DEBIAN_PACKAGE_SECTION "science")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "TRUE")
set(CPACK_DEBIAN_PACKAGE_SUGGESTS "")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/opt/local/share/cmake-3.24/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "Geant4 built using CMake")
set(CPACK_GENERATOR "productbuild;TGZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build;Geant4;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_INSTALL_SCRIPTS "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/source_package_extras.cmake")
set(CPACK_MODULE_PATH "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/cmake/Modules")
set(CPACK_NSIS_DISPLAY_NAME "Geant4-11.2")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "Geant4-11.2")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX13.1.sdk")
set(CPACK_OUTPUT_CONFIG_FILE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/CPackConfig.cmake")
set(CPACK_PACKAGE_CHECKSUM "SHA256")
set(CPACK_PACKAGE_CONTACT "Geant4 Collaboration <https://geant4.cern.ch/collaboration/contacts>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/README.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "C++ toolkit for simulating the passage of particles through matter")
set(CPACK_PACKAGE_FILE_NAME "geant4-11.2.1-Darwin")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://geant4.cern.ch")
set(CPACK_PACKAGE_ICON "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/cmake/Templates/g4_small.bmp")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "Geant4-11.2")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "Geant4-11.2")
set(CPACK_PACKAGE_NAME "geant4")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Geant4 Collaboration")
set(CPACK_PACKAGE_VERSION "11.2.1")
set(CPACK_PACKAGE_VERSION_MAJOR "11")
set(CPACK_PACKAGE_VERSION_MINOR "2")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PROJECT_CONFIG_FILE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/CMakeCPackOptions.cmake")
set(CPACK_RESOURCE_FILE_LICENSE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/LICENSE.txt")
set(CPACK_RESOURCE_FILE_README "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/README.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/opt/local/share/cmake-3.24/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TGZ;TXZ;ZIP")
set(CPACK_SOURCE_IGNORE_FILES "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/;.clang-format;.clang-tidy;README.*;CONTRIBUTING.*;CODING_GUIDELINES.*;RELEASE_MANAGEMENT.rst;SHIFTERS.rst;/GitUtilities/;/tests/;/ReleaseNotes/development;/benchmarks/;/verification/;/test.*/;/doc.*/;/benchmark.*/;~$;/CVS/;/.svn/;/\\\\.svn/;/.git/;.gitignore;/.github/;/.gitlab;/\\\\.git/;\\\\.swp$;\\\\.swp$;\\.swp;\\\\.#;/#")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "geant4-v11.2.1")
set(CPACK_SOURCE_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "Darwin")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Darwin")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()

# Configuration for installation type "full"
list(APPEND CPACK_ALL_INSTALL_TYPES full)
set(CPACK_INSTALL_TYPE_FULL_DISPLAY_NAME "Full Installation")

# Configuration for installation type "runtime"
list(APPEND CPACK_ALL_INSTALL_TYPES runtime)
set(CPACK_INSTALL_TYPE_RUNTIME_DISPLAY_NAME "Runtime Installation")

# Configuration for installation type "developer"
list(APPEND CPACK_ALL_INSTALL_TYPES developer)
set(CPACK_INSTALL_TYPE_DEVELOPER_DISPLAY_NAME "Developer Installation")

# Configuration for component "Development"

SET(CPACK_COMPONENTS_ALL Development Examples Runtime Unspecified)
set(CPACK_COMPONENT_DEVELOPMENT_DISPLAY_NAME "Development Components")
set(CPACK_COMPONENT_DEVELOPMENT_DESCRIPTION "Install all files needed for developing Geant4 applications (headers, makefiles, etc.)")
set(CPACK_COMPONENT_DEVELOPMENT_INSTALL_TYPES developer full)

# Configuration for component "Runtime"

SET(CPACK_COMPONENTS_ALL Development Examples Runtime Unspecified)
set(CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "Geant4 runtime Libraries")
set(CPACK_COMPONENT_RUNTIME_DESCRIPTION "Install all Geant4 libraries")
set(CPACK_COMPONENT_RUNTIME_INSTALL_TYPES runtime developer full)

# Configuration for component "Examples"

SET(CPACK_COMPONENTS_ALL Development Examples Runtime Unspecified)
set(CPACK_COMPONENT_EXAMPLES_DISPLAY_NAME "Application Examples")
set(CPACK_COMPONENT_EXAMPLES_DESCRIPTION "Install all Geant4 examples")
set(CPACK_COMPONENT_EXAMPLES_INSTALL_TYPES full developer)

# Configuration for component "Data"

SET(CPACK_COMPONENTS_ALL Development Examples Runtime Unspecified)
set(CPACK_COMPONENT_DATA_DISPLAY_NAME "Geant4 Data Files")
set(CPACK_COMPONENT_DATA_DESCRIPTION "Install all Geant4 data files")
set(CPACK_COMPONENT_DATA_INSTALL_TYPES full)
