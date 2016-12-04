//
// Created by zhuhaihao on 2016/12/4.
//

#ifndef STATEMACHINE_LIGHT_H
#define STATEMACHINE_LIGHT_H

class Light {
public:
    Light();

    Light(bool state);

    void action() const;

    void setState(bool state);

    bool getState() const;

private:
    bool state;
};
#endif //STATEMACHINE_LIGHT_H
