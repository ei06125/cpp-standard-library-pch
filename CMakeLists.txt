# Copyright (C) ei06125. All Rights Reserved

option(USE_STANDARD_LIBRARY_PCH "Use Standard Library Precompile Headers" ON)
add_library(StandardLibraryPCH OBJECT)
target_sources(StandardLibraryPCH PRIVATE "StandardLibrary.cpp")
target_compile_features(StandardLibraryPCH INTERFACE cxx_std_20)
set(StandardLibraryPCH_INCLUDE_DIR
    ${CMAKE_CURRENT_LIST_DIR}
    PARENT_SCOPE)
if(MSVC)
  target_compile_options(StandardLibraryPCH INTERFACE "/Zc:__cplusplus")
endif()
