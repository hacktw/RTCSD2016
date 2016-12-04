//
// Created by zhuhaihao on 2016/12/4.
//
#include "../Header/Lifter.h"
#include "../common/commonVar.h"
#include <iostream>
using namespace std;

Lifter::Lifter() {
    state = DOWN;
}

Lifter::Lifter(bool state) {
    this->state = state;
}

void Lifter::action() const {
    cout << "changing state of the lifter..." << endl;
    getstate() ? setstate(false) : setstate(true);
}


bool Lifter::getState() const {
    return this->state;
}

void Lifter::setState(bool newState) {
    this->state = newState;
}

