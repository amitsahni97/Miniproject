#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function Multiply two numbers.
 * This is the detailed description of the mul  function.
 * @param a This is the first integer for product.
 * @param b This is the second integer for product.
 * @return The product of the two integer arguments.
 */
int mul(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a*b;
    return result;
}