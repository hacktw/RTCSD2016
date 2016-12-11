//
// Created by wangkai on 2016/12/4.
//

#include "../Header/Sensor.h"
#include <iostream>

using  namespace std;

Sensor::Sensor() {
    state = false;
}

Sensor::Sensor(bool state) {
    this->state = state;
}

bool Sensor::getState() const {
    return this->state;
}

void Sensor::setState(bool newState) {
    this->state = newState;
}

void Sensor::restore() {
    this->state = false;
}
