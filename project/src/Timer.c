#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdbool.h>

void StopWatch(void);
void CountDown(void);
void color_print(const char *s, int color);

int main(void)
{
    system("chcp 936");
    system("cls");

    int opt;
    printf("1: ����ʱ;   2: ����ʱ\n");
    scanf("%d", &opt);
    if (opt == 1)
        StopWatch();
    else
        CountDown(); //����ʱ
    system("pause");
    return 0;
}

//����ʱ
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    printf("����������Կ�ʼ��ʱ...");
    getchar();
    getchar();
    
    while(!end) {
        Sleep(1000);
        system("cls");
        sec++;
        if(sec > 59) {
            min++;
            sec = 0;
        }
        if(min > 59) {
            hour++;
            min = 0;
        }
        printf("%02d:%02d:%02d", hour, min, sec);
    }
}

//����ʱ
void CountDown(void)
{
    int hour, min, sec, opt;
    bool end = 0;

    puts("ѡ��ʱ��: (1: 25����; 2: 50����)");
    scanf("%d", &opt);
    
    switch (opt)
    {
    case 1:
        hour = 0;
        min = 25;
        sec = 0;
        break;
    case 2:
        hour = 0;
        min = 50;
        sec = 0;
        break;
    }

    while(!end) {
        system("cls");
        color_print("������\n", 4);
        printf("%02d:%02d:%02d", hour, min, sec);
        Sleep(1000);
        sec--;
        if(sec < 0) {
            min--;
            sec = 59;
        }
        if(min < 0) {
            hour--;
            min = 59;
        }
        if(hour < 0) // 00:00:00״̬Ҳ��ά��1��
            end = 1;
    }
    system("cls");
    printf("ʱ�䵽\n");
}

void color_print(const char *s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7); //�Ļ�Ĭ�ϰ�ɫ
}