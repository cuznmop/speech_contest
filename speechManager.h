#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
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

    // 初始化容器和属性
    void initSpeech();

    // 创建12名选手
    void createSpeaker();

    // 成员属性
    // 保存第一轮选手编号的容器
    vector<int> v1;
    // 第一轮选手晋级的编号容器
    vector<int> v2;
    // 胜出的前三名选手编号容器
    vector<int> vVictory;
    // 存放编号以及对应具体选手容器
    map<int, Speaker>m_Speaker;
    // 存放比赛轮数的变量
    int m_Index;

};
