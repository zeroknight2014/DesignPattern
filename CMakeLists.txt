cmake_minimum_required(VERSION 3.6)
project(DesignPattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES singleton/singleton.cpp singleton/singleton.h)
add_executable(singleton ${SOURCE_FILES})

set(SOURCE_FILES simplefactory/simplefactory.cpp simplefactory/simplefactory.h)
add_executable(simplefactory ${SOURCE_FILES})

set(SOURCE_FILES factorymethod/factorymethod.cpp factorymethod/factorymethod.h)
add_executable(factorymethod ${SOURCE_FILES})

set(SOURCE_FILES abstractfactory/abstractfactory.cpp abstractfactory/abstractfactory.h)
add_executable(abstractfactory ${SOURCE_FILES})

set(SOURCE_FILES prototype/prototype.cpp prototype/prototype.h)
add_executable(prototype ${SOURCE_FILES})

set(SOURCE_FILES builder/builder.cpp builder/builder.h)
add_executable(builder ${SOURCE_FILES})

set(SOURCE_FILES adapter/adapter.cpp adapter/adapter.h)
add_executable(adapter ${SOURCE_FILES})

set(SOURCE_FILES chainofresponsibility/responsibility.cpp chainofresponsibility/responsibility.h)
add_executable(chainofresponsibility ${SOURCE_FILES})

set(SOURCE_FILES bridge/bridge.cpp bridge/bridge.h)
add_executable(bridge ${SOURCE_FILES})

set(SOURCE_FILES facade/facade.cpp facade/facade.h)
add_executable(facade ${SOURCE_FILES})

set(SOURCE_FILES composite/composite.cpp composite/composite.h)
add_executable(composite ${SOURCE_FILES})