//vaishnavi rani 2105764
//store and display
#include<stdio.h>
struct book
{
    char name[10];
    float price;
    int pages;
}
firstBook[10];

int main()
{
    int n;
    printf("\nHow many books are there?  : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the book, price of thee book and the no.of pages in the book: ");
        scanf("%s %f %d",firstBook[i].name,&firstBook[i].price,&firstBook[i].pages);
    }
    
    printf("\nPrinting your details: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n Name: %s  Price: %f Pages: %d",firstBook[i].name,firstBook[i].price,firstBook[i].pages);
    }
    return 0;
}