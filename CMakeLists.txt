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
        working/workingbasestate.cpp
        working/workingbasestate.h
        subcommon/triggerprocessingstate.h
        working/workingidle.cpp
        working/workingidle.h
        rootfsm/pseudostartstate.cpp
        rootfsm/pseudostartstate.h
        rootfsm/initial.cpp
        rootfsm/initial.h
        working/workingpseudostartstate.h
        rootfsm/Working.cpp
        rootfsm/Working.h
)
