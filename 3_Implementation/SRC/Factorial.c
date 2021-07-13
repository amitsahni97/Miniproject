#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function finds factorial of a number.
 * This is the detailed description of the factorialfunction.
 * @param a This is number whose factorial is to be found.
 * @return The factorial of a number.
 */
int factorial(int a)
{
    printf("Enter the number whose factorial you wanna find  : \n");
    scanf("%d %d",&a);
    int factorial=1,result;
    for(int i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}