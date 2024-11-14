#define _CRT_SECURE_NO_WARNINGS
#include "saolei.h"

void dayin(char arr[hangs][lies])
{
    int i = 1;
    for (i = 1; i <= hang; i++)
    {
        int j = 1;
        for (j = 1; j <= lie; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}
void chushihua(char arr[hangs][lies], int a, int b, char c)
{
    int i;
    for (i = 0; i < a; i++)
    {
        int j = 0;
        for (j = 0; j < b; j++)
        {
            arr[i][j] = c;
        }
    }
}
void set(char arr1[hangs][lies])
{
    int mine = nandu;
    while (mine)
    {
        int a = rand() % hang + 1;
        int b = rand() % lie + 1;
        if (arr1[a][b] != 1)
        {
            arr1[a][b] = '1';
            mine--;
        }
    }
}
int find(char arr1[hangs][lies], char arr2[hangs][lies], int a, int b)
{
    int c = arr1[a - 1][b - 1] + arr1[a - 1][b] +
            arr1[a - 1][b + 1] + arr1[a][b - 1] +
            arr1[a][b] + arr1[a][b + 1] + arr1[a + 1][b - 1] +
            arr1[a + 1][b] + arr1[a + 1][b + 1] - 8 * '0';
    arr2[a][b] = c;
}