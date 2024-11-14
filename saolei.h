#pragma once
#include<stdlib.h>
#include<string.h>

#define hang 9
#define lie  9
#define nandu 10

#define hangs hang+2
#define lies lie+2

void chushihua(char arr1[hangs][lies],int a,int b,char c);
void dayin(char arr1[hangs][lies]);
void set(char arr1[hangs][lies]);
int find(char arr1[hangs][lies],char arr2[hangs][lies],int a, int b);