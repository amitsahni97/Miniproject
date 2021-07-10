#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

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
