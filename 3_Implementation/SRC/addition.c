#include<stdio.h>
#include<stdlib.h>
/** 
 * @brief This add function adds two numbers.
 * This is the detailed description of the add function.
 * @param a This is the first integer for addition.
 * @param b This is the second integer for addition.
 * @return The sum of the two integer arguments.
 */
int add(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a+b;
    return result;
}