//find lenrth of a string
//2105764
#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string:");
    gets(str);
    i=-1;
    while(str[++i]);
    printf("The length of the string is:%d",i);
    return 0;
}