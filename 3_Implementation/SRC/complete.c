/**
 * @file main.c
 * @author Mansi Tardeja (mansitardeja1999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>


int main(){
    int choice,v1,v2,result;
    printf("***********MENU***************\n");
    printf("1. ADD \n 2. SUBSTRACT \n 3. MULTIPLY \n 4 . DIVIDE \n 5. FIND REMAINDER \n 6. FACTORIAL \n");
    printf("Enter your choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: ;
            int result,v1,v2;
            result=add(v1,v2);
            printf("The addition is : %d ",result);
            break;
        case 2: ;
            result=sub(v1,v2);
            printf("The sustraction is : %d ",result);
            break;
        case 3: ;
            result=mul(v1,v2);
            printf("The multiplication is : %d ",result);
            break;
        case 4: ;
            result=division(v1,v2);
            printf("The division is : %d ",result);
            break;
        case 5: ;
            result=remain(v1,v2);
            printf("The remainder is : %d ",result);
            break;
        case 6 : ;
            result=factorial(v1);
            printf("The factorial is : %d ",result);
            break;
        default: 
            printf("Invalid choice . Make another choice please .");
              

    }

    
    
    return 0;

}
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
