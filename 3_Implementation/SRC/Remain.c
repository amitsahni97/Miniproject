#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function find remainder after divsion of two numbers.
 * This is the detailed description of the remainfunction.
 * @param a This is the first integer for finding remainder.
 * @param b This is the second integer for finding remainder.
 * @return The remainder of the two integer arguments.
 */
int remain(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a%b;
    return result;
}