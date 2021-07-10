int add(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a+b;
    return result;
}
int sub(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a-b;
    return result;
}
int mul(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a*b;
    return result;
}
int division(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a/b;
    return result;
}
int remain(int a,int b)
{
    printf("Enter the value of a and b : \n");
    scanf("%d %d",&a,&b);
    int result=a%b;
    return result;
}
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