OPTION(EnableTesting "Turn on Testing" ON)
OPTION(EnableCPack "Automatically build Installers" OFF)
OPTION(UseInternalKeyword "Create a keyword `internal` so public elements are only public in library" ON)

### CPack OPTIONS ###
#[[
Package Types
7Z (7-Zip file format)
DEB (Debian packages)
External (CPack External packages)
IFW (Qt Installer Framework)
NSIS (Null Soft Installer)
NSIS64 (Null Soft Installer (64-bit))
NuGet (NuGet packages)
RPM (RPM packages)
STGZ (Self extracting Tar GZip compression
TBZ2 (Tar GZip compression)
TXZ (Tar XZ compression)
TZ (Tar Compress compression)
ZIP (ZIP file format)
]]
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#set(CPACK_VERBATIM_VARIABLES true)
#set(CPACK_PACKAGE_VERSION_MAJOR 0)
#set(CPACK_PACKAGE_VERSION_MINOR 2)
#set(CPACK_PACKAGE_VERSION_PATCH 0)
#set(CPACK_PACKAGE_VENDOR "")
#set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "")
#set(CPACK_PACKAGE_DESCRIPTION_FILE "")
#set(CPACK_RESOURCE_FILE_WELCOME "")
#set(CPACK_RESOURCE_FILE_LICENSE "")
#set(CPACK_RESOURCE_FILE_README "")