#include "speechManager.h"

SpeechManager::SpeechManager()
{
    
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


SpeechManager::~SpeechManager()
{

}