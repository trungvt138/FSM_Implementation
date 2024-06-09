//
// Created by trung on 31/05/2024.
//

#include "actions.h"

#include <iostream>
using namespace std;

Actions::~Actions() {
    cout << "  Actions destructor called" << endl;
}

void Actions::greenOn() {
    cout << "  Actions greenOn called" << endl;
}

void Actions::greenOff() {
    cout << "  Actions greenOff called" << endl;
}

void Actions::motorOn() {
    cout << "  Actions motorOn called" << endl;
}

void Actions::motorSlowOn() {
    cout << "  Actions motorSlowOn called" << endl;
}

void Actions::motorSlowOff() {
    cout << "  Actions motorSlowOff called" << endl;
}

void Actions::enteredOPIdle() {}
void Actions::enteredInitial() {}
void Actions::enteredOperation() {}
void Actions::enteredOPIdent() {}
void Actions::enteredOPSort() {}
void Actions::enteredOPStart() {}
