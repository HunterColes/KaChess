cmake_minimum_required(VERSION 3.14)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(Engine VERSION 0.3)

set(Sources
#src/${PROJECT_NAME}/example.cpp
)
set(Headers
#include/${PROJECT_NAME}/example.h 
)

#EXPORT CMAKE
############################################################################
add_library(${PROJECT_NAME} STATIC ${Sources} ${Headers})
target_link_libraries(${PROJECT_NAME} PUBLIC Qt6::Gui Qt6::Core Qt6::Widgets)

target_include_directories(${PROJECT_NAME}
                           PUBLIC
                           "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
                           "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

add_library(Chess::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

install(
    DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME}
    DESTINATION include
)

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}Targets 
   ARCHIVE  DESTINATION lib
   LIBRARY  DESTINATION lib
   INCLUDES DESTINATION include
   RUNTIME  DESTINATION bin
)
install(EXPORT ${PROJECT_NAME}Targets
   FILE ${PROJECT_NAME}Targets.cmake
   NAMESPACE Chess::
   DESTINATION lib/cmake/Chess
)
################################################