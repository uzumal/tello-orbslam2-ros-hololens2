# CMake generated Testfile for 
# Source directory: /home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads
# Build directory: /home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(FindThreads.C-only "/home/uzu/ダウンロード/cmake-3.14.0/bin/ctest" "--build-and-test" "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/C-only" "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/C-only" "--build-generator" "Unix Makefiles" "--build-project" "FindThreads_C-only" "--build-options" "-DCMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/make" "--test-command" "/home/uzu/ダウンロード/cmake-3.14.0/bin/ctest" "-V")
set_tests_properties(FindThreads.C-only PROPERTIES  _BACKTRACE_TRIPLES "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CMakeLists.txt;2;add_test;/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CMakeLists.txt;0;")
add_test(FindThreads.CXX-only "/home/uzu/ダウンロード/cmake-3.14.0/bin/ctest" "--build-and-test" "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CXX-only" "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CXX-only" "--build-generator" "Unix Makefiles" "--build-project" "FindThreads_CXX-only" "--build-options" "-DCMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/make" "--test-command" "/home/uzu/ダウンロード/cmake-3.14.0/bin/ctest" "-V")
set_tests_properties(FindThreads.CXX-only PROPERTIES  _BACKTRACE_TRIPLES "/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CMakeLists.txt;2;add_test;/home/uzu/ダウンロード/cmake-3.14.0/Tests/FindThreads/CMakeLists.txt;0;")
