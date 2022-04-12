//vaishnavi rani 2105764
//employee having data

#include <stdio.h>

struct employee{
    char name[10];
    char address[10];
    int age;
    int salary;
}emp[10];


int main(){
    int n,sum=0;
    printf("\nNo of employees:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nenter name,address,age and salary:");
        scanf("%s %s %d %d",emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
        sum=sum+emp[i].salary;
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%s %s %d %d",emp[i].name,emp[i].address,&emp[i].age,emp[i].salary);
    }
    float avg;
    avg=sum/n;
    printf("\n\n\n the average salary is:%f",avg);
    return 0;
}