//
// Created by zhuhaihao on 2016/12/4.
//
#include "../Header/Light.h"
#include "../common/commonVar.h"
#include <iostream>
using namespace std;

Light::Light() {
    state = RED;
}

Light::Light(bool state) {
    this->state = state;
}

void Light::action() const {
    cout << "changing state of the light..." << endl;
    getState() ? setState(false) : setState(true);
}

bool Light::getState() const {
    return this->state;
}

void Light::setState(bool newState) {
    this->state = newState;
}

