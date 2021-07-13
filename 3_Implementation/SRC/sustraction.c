#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function adds two numbers.
 * This is the detailed description of the sub function.
 * @param a This is the first integer for Substraction.
 * @param b This is the second integer for Substraction.
 * @return The diffrence of the two integer arguments.
 */
int sub(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a-b;
    return result;
}