//
// Created by wangkai on 2016/12/4.
//

#ifndef STATEMACHINE_GURDSYSTEM_H
#define STATEMACHINE_GURDSYSTEM_H

#include "./Sensor.h"
#include "./Lifter.h"
#include "./Light.h"

class GurdSystem {
public:
    GurdSystem(){
        sensor = new Sensor(false);
        lifter = new Lifter(false);
        light  = new Light(false);
    }

    void carIn() ;   // 测试车进入

    void carOut() ;   // 测试车出去
private:
    Sensor sensor;
    Lifter lifter;
    Light light;
};

#endif //STATEMACHINE_GURDSYSTEM_H
