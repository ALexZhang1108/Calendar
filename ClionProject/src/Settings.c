#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define ENTER 13
#define ESC 27
#define ARROW 224
#define UP2 72
#define DOWN2 80
#define LEFT2 75
#define RIGHT2 77
#define BACKBLUE BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY
#define WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
#define BLUE FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define RED FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define GREEN FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define HIGHLIGHT BACKBLUE
#define DEFAULTCOLOR BLUE
#define TODAY RED
#define RESULT GREEN
//#include "connection.h"

struct Settings
{
    int SettingItem;
    int Setting;
} S;

int main()
{
    /*FILE *fp;
    fp = fopen("Settings.dat", "wb+");
    S.SettingItem = 3333332;
    S.Setting = 3;
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        printf("Success\n");
        
    }
    S.SettingItem = 1;
    S.Setting = 2;
    rewind(fp);
    while(fread(&S, sizeof(S), 1, fp) == 1){
    printf("%d\n",S.SettingItem);
    printf("%d\n",S.Setting);
    }
    */
    PrintTimeZone(8);
    system("pause");
}

void PrintTimeZone(int offset)
{
    int key = 0;
    int optionpick = 1;
    int start = 0;
    while (1)
    {
        if (start == 0)
        {
            go(0, 0);
            color(DEFAULTCOLOR);
            printf("UTC-12");
            go(0, 2);
            color(DEFAULTCOLOR);
            printf("UTC-11");
            go(0, 4);
            color(DEFAULTCOLOR);
            printf("UTC-10");
            go(0, 6);
            color(DEFAULTCOLOR);
            printf("UTC-9");
            go(0, 8);
            color(DEFAULTCOLOR);
            printf("UTC-8");
            go(0, 10);
            color(DEFAULTCOLOR);
            printf("UTC-7");
            go(0, 12);
            color(DEFAULTCOLOR);
            printf("UTC-6");
            go(0, 14);
            color(DEFAULTCOLOR);
            printf("UTC-5");
            go(0, 16);
            color(DEFAULTCOLOR);
            printf("UTC-4");
            go(0, 18);
            color(DEFAULTCOLOR);
            printf("UTC-3");
            go(0, 20);
            color(DEFAULTCOLOR);
            printf("UTC-2");
            go(0, 22);
            color(DEFAULTCOLOR);
            printf("UTC-1");
            go(0, 24);
            color(DEFAULTCOLOR);
            printf("UTC��0");
            go(0, 26);
            color(DEFAULTCOLOR);
            printf("UTC+1");
            go(0, 28);
            color(DEFAULTCOLOR);
            printf("UTC+2");
            go(0, 30);
            color(DEFAULTCOLOR);
            printf("UTC+3");
            go(0, 32);
            color(DEFAULTCOLOR);
            printf("UTC+4");
            go(0, 34);
            color(DEFAULTCOLOR);
            printf("UTC+5");
            go(0, 36);
            color(DEFAULTCOLOR);
            printf("UTC+6");
            go(0, 38);
            color(DEFAULTCOLOR);
            printf("UTC+7");
            go(0, 40);
            color(DEFAULTCOLOR);
            printf("UTC+8");
            go(0, 42);
            color(DEFAULTCOLOR);
            printf("UTC+9");
            go(0, 44);
            color(DEFAULTCOLOR);
            printf("UTC+10");
            go(0, 46);
            color(DEFAULTCOLOR);
            printf("UTC+11");
            go(0, 48);
            color(DEFAULTCOLOR);
            printf("UTC+12");
            go(0, 50);
            color(DEFAULTCOLOR);
            printf("UTC+13");
            go(0, 52);
            color(DEFAULTCOLOR);
            printf("UTC+14");
                }
        if (kbhit())
            key = getch();
        //������̱�������ȡ��λ��Ӧ��ֵ
        if (key == ARROW || key == ENTER)
        //���µ��Ƿ�������س������һ����������������������жϼ�λ
        {
            system("cls");
            go(0, 0);
            color(DEFAULTCOLOR);
            printf("UTC-12");
            go(0, 2);
            color(DEFAULTCOLOR);
            printf("UTC-11");
            go(0, 4);
            color(DEFAULTCOLOR);
            printf("UTC-10");
            go(0, 6);
            color(DEFAULTCOLOR);
            printf("UTC-9");
            go(0, 8);
            color(DEFAULTCOLOR);
            printf("UTC-8");
            go(0, 10);
            color(DEFAULTCOLOR);
            printf("UTC-7");
            go(0, 12);
            color(DEFAULTCOLOR);
            printf("UTC-6");
            go(0, 14);
            color(DEFAULTCOLOR);
            printf("UTC-5");
            go(0, 16);
            color(DEFAULTCOLOR);
            printf("UTC-4");
            go(0, 18);
            color(DEFAULTCOLOR);
            printf("UTC-3");
            go(0, 20);
            color(DEFAULTCOLOR);
            printf("UTC-2");
            go(0, 22);
            color(DEFAULTCOLOR);
            printf("UTC-1");
            go(0, 24);
            color(DEFAULTCOLOR);
            printf("UTC��0");
            go(0, 26);
            color(DEFAULTCOLOR);
            printf("UTC+1");
            go(0, 28);
            color(DEFAULTCOLOR);
            printf("UTC+2");
            go(0, 30);
            color(DEFAULTCOLOR);
            printf("UTC+3");
            go(0, 32);
            color(DEFAULTCOLOR);
            printf("UTC+4");
            go(0, 34);
            color(DEFAULTCOLOR);
            printf("UTC+5");
            go(0, 36);
            color(DEFAULTCOLOR);
            printf("UTC+6");
            go(0, 38);
            color(DEFAULTCOLOR);
            printf("UTC+7");
            go(0, 40);
            color(DEFAULTCOLOR);
            printf("UTC+8");
            go(0, 42);
            color(DEFAULTCOLOR);
            printf("UTC+9");
            go(0, 44);
            color(DEFAULTCOLOR);
            printf("UTC+10");
            go(0, 46);
            color(DEFAULTCOLOR);
            printf("UTC+11");
            go(0, 48);
            color(DEFAULTCOLOR);
            printf("UTC+12");
            go(0, 50);
            color(DEFAULTCOLOR);
            printf("UTC+13");
            go(0, 52);
            color(DEFAULTCOLOR);
            printf("UTC+14");
        }
    }
}

void Settings()
{
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");
}

void LoadSettings()
{
    FILE *fp;

    fp = fopen("Settings.dat", "wb+");
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//����ƶ�������X��ʾ�����꣬Y��ʾ������
void go(int x, int y)
{
    COORD coord;
    //����
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //��ñ�׼������
    SetConsoleCursorPosition(a, coord);
    //�Ա�׼����ľ��Ϊ�������ÿ���̨�������
}
