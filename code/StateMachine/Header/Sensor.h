//
// Created by zhuhaihao on 2016/12/4.
//

#ifndef STATEMACHINE_STATEMACHINE_H
#define STATEMACHINE_STATEMACHINE_H

class Sensor {
public:
    Sensor();

    Sensor(bool state);

    bool getState() const;

    void setState(bool newState) ;

    void restore() ;

private:

    // 这里用一个状态表示车辆进入传感器信号和车辆离开传感器信号的状态
    // 如果为true表示车辆进入 false表示车辆离开
    bool state;
};
#endif //STATEMACHINE_STATEMACHINE_H
