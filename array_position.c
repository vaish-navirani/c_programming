/* program to search whether an item is present in the array or not.if present
display the position
vaishnavi rani
2105764 */
#include <stdio.h>

int main()
{
    int i, item, m[20], pos = -1;
    printf("\nenter item:");
    scanf("%d", &item);
    for (i = 0; i < 20; i++)
    {
        printf("\nenter data:");
        scanf("%d", &m[i]);
    }
    for (i = 0; i < 20; i++)
    {
        if (item == m[i])
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        printf("\nitem is not present");
    else
        printf("\nitem is present in position %d", pos);

    return 0;
}