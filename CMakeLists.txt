cmake_minimum_required(VERSION 3.0.0)
project(Empyre VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(
    boost
    lib
    lib/jsoncpp
    lib/nginx
    includes)

add_executable(Empyre
    src/ctrl/ModuleRoutingComponent.cpp
    src/proc/NLPClassificationProcessor.cpp
    src/models/serve/NLPClassificationService.cpp)

# find_package(Boost REQUIRED)

target_include_directories(Empyre PUBLIC ${Boost_INCLUDE_DIRS}) 
target_link_libraries(Empyre LINK_PUBLIC ${Boost_LIBRARIES})

set(BOOST_ROOT "C:\\Users\\danie\\libs\\boost_1_65_1\\boost")
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME ON) 

set(CMAKE_INCLUDE_PATH ".\\lib\\libtorch-win-shared-with-deps-debug-1.8.2+cpu\\libtorch\\share\\cmake\\Torch")
# find_package(Torch REQUIRED)
target_link_libraries(Empyre "${TORCH_LIBRARIES}")
set_property(TARGET Empyre PROPERTY CXX_STANDARD 14)

# The following code block is suggested to be used on Windows.
# According to https://github.com/pytorch/pytorch/issues/25457,
# the DLLs need to be copied to avoid memory errors.
if (MSVC)
  file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*.dll")
  add_custom_command(TARGET example-app
                     POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E copy_if_different
                     ${TORCH_DLLS}
                     $<TARGET_FILE_DIR:example-app>)
endif (MSVC)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)