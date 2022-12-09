#include "speechManager.h"

SpeechManager::SpeechManager()
{
    //初始化容器和属性
    this->initSpeech();
}

void SpeechManager::show_Menu()
{
    cout << "**************************************" << endl;
    cout << "**********  欢迎参加演讲比赛  ********" << endl; 	
    cout << "**********  1、开始演讲比赛  *********" << endl; 	
    cout << "**********  2、查看往届记录  *********" << endl; 	
    cout << "**********  3、清空比赛记录  *********" << endl; 	
    cout << "**********  0、退出系比赛统  *********" << endl;
    cout << "**************************************" << endl;
    cout << endl;
}


void SpeechManager::exitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}

void SpeechManager::initSpeech()
{
    // 容器都置空
    this->v1.clear();
    this->v2.clear();
    this->vVictory.clear();
    this->m_Speaker.clear();

    // 初始化比赛的轮数
    this->m_Index = 1;
}

SpeechManager::~SpeechManager()
{

}