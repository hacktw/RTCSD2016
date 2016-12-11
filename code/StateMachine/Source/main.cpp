//
// Created by wangkai on 2016/12/4.
//

#include "./GurdSystem.cpp"
#include <iostream>

using namespace std;

int main(){

    GurdSystem gs;
    // 测试车进来
    cout << "testing cat in..." << endl;
    gs.carIn();
    // 测试车出去
    cout << "testing cat out..." << endl;
    gs.carOut();
    return 0;
}
