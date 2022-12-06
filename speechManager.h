#pragma once

#include <iostream>
using namespace std;

class SpeechManager
{
public:
    // 构造函数
    SpeechManager();

    // 菜单功能
    void show_Menu();

    // 退出系统
    void exitSystem();

    // 析构函数
    ~SpeechManager();
};
