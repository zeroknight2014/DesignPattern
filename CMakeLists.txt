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

set(SOURCE_FILES strategy/strategy.cpp strategy/strategy.h)
add_executable(strategy ${SOURCE_FILES})

set(SOURCE_FILES decorator/decorator.cpp decorator/decorator.h)
add_executable(decorator ${SOURCE_FILES})

set(SOURCE_FILES proxy/proxy.cpp proxy/proxy.h)
add_executable(proxy ${SOURCE_FILES})

set(SOURCE_FILES templatemethod/templatemethod.cpp templatemethod/templatemethod.h)
add_executable(templatemethod ${SOURCE_FILES})

set(SOURCE_FILES flyweight/flyweight.cpp flyweight/flyweight.h)
add_executable(flyweight ${SOURCE_FILES})

set(SOURCE_FILES command/command.cpp command/command.h)
add_executable(command ${SOURCE_FILES})

set(SOURCE_FILES iterator/iterator.cpp iterator/iterator.h)
add_executable(iterator ${SOURCE_FILES})

set(SOURCE_FILES mediator/mediator.cpp mediator/mediator.h)
add_executable(mediator ${SOURCE_FILES})

set(SOURCE_FILES memento/memento.cpp memento/memento.h)
add_executable(memento ${SOURCE_FILES})

set(SOURCE_FILES state/state.cpp state/state.h)
add_executable(state ${SOURCE_FILES})

set(SOURCE_FILES observer/observer.cpp observer/observer.h)
add_executable(observer ${SOURCE_FILES})
