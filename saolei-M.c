#define _CRT_SECURE_NO_WARNINGS
#include"saoleia.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
    printf("         扫雷\n");
    printf("******* 1 play  *****\n");
    printf("******* 0 exit  *****\n");
    printf("*********************\n");
    printf("*********************\n");
}
void game()
{
    char arr1[hangs][lies];
    char arr2[hangs][lies];
    srand((unsigned int)time(NULL));
    chushihua(arr1, hangs, lies, '0');
    chushihua(arr2, hangs, lies, '*');
    set(arr1);
    dayin(arr2);
    int i = 0, j = 0;
    int win = 0;
    while (win<hang*lie-nandu)
    {
        printf("请输入要排查的位置\n");
        scanf("%d %d", &i, &j);
        if (i<1 || i>hang || j<1 || j>lie)
        {
            printf("你输入的坐标有误\n请重新输入：");
        }
        if (arr1[i][j] == '1')
        {
            printf("这戏，我就不演了\n炸死你\n");
            dayin(arr1);
        }
        if (arr1[i][j] == '0')
        {
            find(arr1,arr2, i, j);
            system("cls");
            dayin(arr2);
            win++;
        }
    }
    if (win == hang * lie - nandu)
    {
        printf("恭喜你，获得胜利");
    }
}
int main()
{
    menu();
    int a = 0;
    while(1)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            game();
            break;
        }
        else if (a == 0)
        {
            system("cls");
            printf("退出成功");
        }
        else
        {
            printf("error,请重新输入：");
        }
    }
    return 0;
}