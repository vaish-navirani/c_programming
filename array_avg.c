/* program to find average marks obtained by a class of 20 students in a test
and count number students scored O (90 & above) grade.
2105764
vaishnavi rani */
#include <stdio.h>

int main(){
    int i,avg,count=0,sum=0,marks[20];
    for (i=0;i<20;i++)
    {
        printf("\nenter marks:");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<20;i++)
    {
    sum=sum+marks[i];
    if(marks[i]>89)
      count++;
    }
    avg=sum/20;
    printf("\naverage marks = %d",avg);
    printf("\nnumber of student secured o grade=%d",count);

    return 0;
}s