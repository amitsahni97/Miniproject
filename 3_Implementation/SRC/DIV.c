#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function divides two numbers.
 * This is the detailed description of the division function.
 * @param a This is the first integer for division.
 * @param b This is the second integer for division.
 * @return The division of the two integer arguments.
 */
int division(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a/b;
    return result;
}