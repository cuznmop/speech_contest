#include "speechManager.h"

int main()
{
    SpeechManager sm;

    int choice = 0; // 用于存储用户的输入

    while(true)
    {
        sm.show_Menu();

        // // 测试12名选手的创建
        // for (map<int, Speaker>::iterator iter=sm.m_Speaker.begin(); iter != sm.m_Speaker.end(); iter++)
        // {
        //     printf("选手编号: %d\t 姓名: %s\t 分数: %d\n", iter->first, iter->second.m_Name.c_str(), iter->second.m_Socre[0]);
        // }

        cout << "请输入您的选择: " << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:  // 开始比赛
                sm.startSpeech();
                break;
            case 2:  // 查看往届记录
                break;
            case 3:  // 清空比赛记录
                break;
            case 0:  // 退出系统
                sm.exitSystem();
                break;
            default:
                system("cls");
                break;
        }
    }

    system("pause");
    return 0;
}