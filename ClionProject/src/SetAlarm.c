#include "connection.h"

void SetAlarm()
{
    time_t timep;
    struct tm *p;
    int hour, min, end = 0;

    go(51, 9);
    printf("����");
    go(46, 12);
    printf("����ʱ��: __:__\b\b\b\b\b");
    scanf("%d%d", &hour, &min);

    while(!end) {
        time(&timep);
        p = gmtime(&timep);

        system("cls");
        go(52, 12);
        printf("%02d:%02d", p -> tm_hour + 8, p -> tm_min);//ʱ��
        CONSOLE_CURSOR_INFO cursor_info = {1, 0};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//���ع��
        Sleep(1000);
        if(p -> tm_hour + 8 == hour && p -> tm_min == min) {
            system("cls");
            go(52, 12);
            printf("ʱ�䵽");
            end = 1;
        }
    }
    getchar();
    getchar();
    system("cls");
}