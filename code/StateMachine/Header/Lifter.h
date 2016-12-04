//
// Created by zhuhaihao on 2016/12/4.
//

#ifndef STATEMACHINE_LIFTER_H
#define STATEMACHINE_LIFTER_H

class Lifter{
public:
    Lifter();

    Lifter(bool state);

    void action() const;

    void setState(bool state);

    bool getState() const;

private:
    bool state;
};

#endif //STATEMACHINE_LIFTER_H
