/*********************
 * �����ӣ�����ʱ      *
 * *******************/
#include "connection.h"

void StopWatch(void);
void CountDown(void);
void color_print(const char *s, int color);
//void go(int x, int y);
/*
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
    getchar();
    getchar();
    return 0;
}
*/

//����ʱ
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    system("cls");
    go(45, 12);
    color_print("����������Կ�ʼ��ʱ...", 2);
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
        go(50, 12);
        printf("%02d:%02d:%02d", hour, min, sec);
    }
}

//����ʱ
void CountDown(void)
{
    int hour, min, sec, i, num;
    int ohour, omin, osec;
    float percent = 1.0f;
    bool end = 0;
    int key;

    system("cls");
    //�߿�
    go(40, 8);
    color_print("����������������������������������������������������", 4);
    go(40, 9);
    color_print("��", 4);
    go(40, 10);
    color_print("��", 4);
    go(40, 11);
    color_print("��", 4);
    go(40, 12);
    color_print("��", 4);
    go(40, 13);
    color_print("��", 4);
    go(40, 14);
    color_print("��", 4);
    go(40, 15);
    color_print("��", 4);
    go(40, 16);
    color_print("��", 4);
    go(40, 17);
    color_print("����������������������������������������������������", 4);
    go(65, 9);
    color_print("��", 4);
    go(65, 10);
    color_print("��", 4);
    go(65, 11);
    color_print("��", 4);
    go(65, 12);
    color_print("��", 4);
    go(65, 13);
    color_print("��", 4);
    go(65, 14);
    color_print("��", 4);
    go(65, 15);
    color_print("��", 4);
    go(65, 16);
    color_print("��", 4);

    go(50, 10);
    color_print("������\n", 4);
    go(43, 12);
    printf("������ʱ��:__:__:__\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &ohour, &omin, &osec);
    hour = ohour;
    min = omin;
    sec = osec;

    while(!end) {
        system("cls");

        //�߿�
        go(40, 8);
        color_print("����������������������������������������������������", 4);
        go(40, 9);
        color_print("��", 4);
        go(40, 10);
        color_print("��", 4);
        go(40, 11);
        color_print("��", 4);
        go(40, 12);
        color_print("��", 4);
        go(40, 13);
        color_print("��", 4);
        go(40, 14);
        color_print("��", 4);
        go(40, 15);
        color_print("��", 4);
        go(40, 16);
        color_print("��", 4);
        go(40, 17);
        color_print("����������������������������������������������������", 4);
        go(65, 9);
        color_print("��", 4);
        go(65, 10);
        color_print("��", 4);
        go(65, 11);
        color_print("��", 4);
        go(65, 12);
        color_print("��", 4);
        go(65, 13);
        color_print("��", 4);
        go(65, 14);
        color_print("��", 4);
        go(65, 15);
        color_print("��", 4);
        go(65, 16);
        color_print("��", 4);

        //����ʱ��
        go(42, 14);
        num = (int)(percent * 20);
        color_print("|", 4);
        for(i = 0; i < num; i++)
            color_print("�~", 4);

        go(50, 10);
        color_print("������\n", 4);
        putchar('\n');
        go(49, 12);
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
        float fenzi = sec + min * 60 + hour * 3600;
        float fenmu = osec + omin * 60 + ohour * 3600;
        percent = fenzi / fenmu;
    }

    system("cls");
    //�߿�
    go(40, 8);
    color_print("����������������������������������������������������", 4);
    go(40, 9);
    color_print("��", 4);
    go(40, 10);
    color_print("��", 4);
    go(40, 11);
    color_print("��", 4);
    go(40, 12);
    color_print("��", 4);
    go(40, 13);
    color_print("��", 4);
    go(40, 14);
    color_print("��", 4);
    go(40, 15);
    color_print("��", 4);
    go(40, 16);
    color_print("��", 4);
    go(40, 17);
    color_print("����������������������������������������������������", 4);
    go(65, 9);
    color_print("��", 4);
    go(65, 10);
    color_print("��", 4);
    go(65, 11);
    color_print("��", 4);
    go(65, 12);
    color_print("��", 4);
    go(65, 13);
    color_print("��", 4);
    go(65, 14);
    color_print("��", 4);
    go(65, 15);
    color_print("��", 4);
    go(65, 16);
    color_print("��", 4);

    go(50, 12);
    color_print("ʱ�䵽", 2);
    getchar();
    getchar();
    system("cls");
}


/*********************
 * 0 = ��ɫ 8 = ��ɫ
 * 1 = ��ɫ 9 = ����ɫ
 * 2 = ��ɫ A = ����ɫ
 * 3 = ǳ��ɫ B = ��ǳ��ɫ
 * 4 = ��ɫ C = ����ɫ
 * 5 = ��ɫ D = ����ɫ
 * 6 = ��ɫ E = ����ɫ
 * 7 = ��ɫ F = ����ɫ
 * *******************/
void color_print(const char *s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color| BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0 | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY); //�Ļ�Ĭ�ϰ�ɫ
}

/*void go(int x, int y)
//����ƶ�������X��ʾ�����꣬Y��ʾ������
{
    COORD coord;
    //����
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //��ñ�׼������
    SetConsoleCursorPosition(a, coord);
    //�Ա�׼����ľ��Ϊ�������ÿ���̨�������
}*/