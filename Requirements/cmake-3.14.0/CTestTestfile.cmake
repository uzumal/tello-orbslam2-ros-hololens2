# CMake generated Testfile for 
# Source directory: /home/uzu/ダウンロード/cmake-3.14.0
# Build directory: /home/uzu/ダウンロード/cmake-3.14.0
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/uzu/ダウンロード/cmake-3.14.0/Tests/EnforceConfig.cmake")
add_test(SystemInformationNew "/home/uzu/ダウンロード/cmake-3.14.0/bin/cmake" "--system-information" "-G" "Unix Makefiles")
set_tests_properties(SystemInformationNew PROPERTIES  _BACKTRACE_TRIPLES "/home/uzu/ダウンロード/cmake-3.14.0/CMakeLists.txt;792;add_test;/home/uzu/ダウンロード/cmake-3.14.0/CMakeLists.txt;0;")
subdirs("Source/kwsys")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmcompress")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
