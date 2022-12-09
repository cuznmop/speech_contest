#include "speechManager.h"

int main()
{
    SpeechManager sm;

    int choice = 0; // 用于存储用户的输入

    while(true)
    {
        sm.show_Menu();

        cout << "请输入您的选择: " << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:  // 开始比赛
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