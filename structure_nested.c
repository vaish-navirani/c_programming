//vaishnavi rani 2105764 18 jan 2022
//nested structure

#include<stdio.h>
struct address
{
    char name[15];
    char city[30];
    int pin;
};
struct emp
{
    struct address a;
    char phone[10];
};
int main()
{
    struct emp e={"Vaishnavi","Bihar",2352625234,"800001"};
    printf("name:%s\ncity:%s\nphone:%s\npin:%d\n",e.a.name,e.a.city,e.phone,e.a.pin);
}