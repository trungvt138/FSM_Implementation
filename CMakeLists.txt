cmake_minimum_required(VERSION 3.28)
project(FSMDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(FSMDemo main.cpp
        main.cpp
        main.cpp
        context.cpp
        context.h
        rootfsm/basestate.cpp
        rootfsm/basestate.h
        contextdata.cpp
        contextdata.h
        actions.cpp
        actions.h
        operation/operationbasestate.cpp
        operation/operationbasestate.h
        subcommon/triggerprocessingstate.h
        operation/operationidle.cpp
        operation/operationidle.h
        rootfsm/pseudostartstate.cpp
        rootfsm/pseudostartstate.h
        rootfsm/initial.cpp
        rootfsm/initial.h
        operation/operationpseudostartstate.h
        rootfsm/Operation.cpp
        rootfsm/Operation.h
        operation/wsatstartstate.cpp
        operation/wsatstartstate.h
)
