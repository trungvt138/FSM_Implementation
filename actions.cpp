//
// Created by trung on 31/05/2024.
//

#include "actions.h"

#include <iostream>
using namespace std;

Actions::~Actions() {
    cout << "  Actions destructor called" << endl;
}

void Actions::on() {
    cout << "  Actions on called" << endl;
}

void Actions::off() {
    cout << "  Actions off called" << endl;
}

void Actions::shutdown() {
    cout << "  Actions shutdown called" << endl;
}

void Actions::unlock() {
    cout << "  Actions unlock called" << endl;
}

void Actions::enteredOPIdle() {}
void Actions::enteredInitial() {}
void Actions::enteredOperation() {}
void Actions::enteredOPIdent() {}
void Actions::enteredOPSort() {}
void Actions::enteredOPStart() {}
