/* write a function to find out largest between n numbers and another function
 to count the no of leaders (a no is a leader if all previous no are small)
 2105764
 vaishnavi rani */

#include <stdio.h>
int find_max (int n)
{
    int next, largest=0,i;
    for(i=0;i<n;i++){
        printf("Enter the next number: ");
        scanf("%d",&next);
        if (next>largest)
        largest=next;
    }
    return(largest);
}
int count_leader (int n)
{
    int next, leader=0,i,count=0;
    for (i=0;i<n;i++)
    {
        printf("Enter next number: ");
        scanf("%d", &next);
        if (next>leader){
            leader = next;
            count ++;
        }
    }
    return (count);
}

int main()
{
    int a;
    a = find_max(10);
    printf("\nMax is: %d",a);
    printf("\nNo. of leaders are %d", count_leader(10));
    return 0;
}