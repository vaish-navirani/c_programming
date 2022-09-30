#include <stdio.h>

int main(){
    printf("The size taken by int is %d \n", sizeof(int));
    printf("The size taken by unsigned int is %d \n", sizeof(unsigned int));
    printf("The size taken by float is %d \n", sizeof(float));
    printf("The size taken by double is %d \n", sizeof(double));
    printf("The size taken by character is %d \n", sizeof(char));
    printf("The size taken by short int is %d \n", sizeof( short int));
    printf("The size taken by long int is %d \n", sizeof( long int));
    printf("The size taken by long long int is %d \n", sizeof( long long int));
    //In C, character literals such as 'a' have type int, and thus sizeof('a') is equal to sizeof(int).
I    //n C++, character literals have type char, and thus sizeof('a') is equal to sizeof(char).

    return 0;
}