//
// Created by zhuhaihao on 2016/12/4.
//

#include "../Header/GurdSystem.h"
#include <iostream>

using namespace std;

void GurdSystem::carIn() {
    this->sensor.setState(true);
    cout << "now the car are comming in..." << endl;
    if ( !this->lifter.getState() ) {
        this->lifter.action();
        cout << "lifter up..." << endl;
    }
    if ( !this->light.getState() ) {
        this->light.action();
        cout << "light green..." << endl;
    }
}

void GurdSystem::carOut() {
    this->sensor.setState(false);
    cout << "now the car are comming out..." << endl;
    if ( this->lifter.getState() ) {
        this->lifter.action();
        cout << "lifter down..." << endl;
    }
    if ( this->light.getState() ) {
        this->light.action();
        cout << "light red..." << endl;
    }
}
