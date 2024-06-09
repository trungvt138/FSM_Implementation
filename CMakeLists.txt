cmake_minimum_required(VERSION 3.28)
project(FSMDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(FSMDemo main.cpp
        context.cpp
        context.h
        contextdata.cpp
        contextdata.h
        actions.cpp
        actions.h
        subcommon/triggerprocessingstate.h
        operation/opbasestate.cpp
        operation/opbasestate.h
        operation/opidle.cpp
        operation/opidle.h
        rootfsm/pseudostartstate.cpp
        rootfsm/pseudostartstate.h
        rootfsm/initial.cpp
        rootfsm/initial.h
        rootfsm/basestate.cpp
        rootfsm/basestate.h
        rootfsm/operation.cpp
        rootfsm/operation.h
        operation/oppseudostartstate.h
        operation/opstart.cpp
        operation/opstart.h
        operation/opident.cpp
        operation/opident.h
        operation/opsort.cpp
        operation/opsort.h
        operation/oppseudoendstate.h
        operation/opslide.cpp
        operation/opslide.h
)
