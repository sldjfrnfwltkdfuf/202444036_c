#include <stdio.h>

int plus(int a,int b);
int minus(int a,int b);
int multi(int a,int b);
int divide(int a,int b);
int main(void)
{
    int a,b;
    int result;

    scanf("%d %d", &a,&b);
    result =plus(a,b);
    printf("%d + %d = %d",a,b,result);
    result =minus(a,b);
     printf("%d - %d = %d",a,b,result);
    result =multi(a,b);
    printf("%d * %d = %d",a,b,result);
    result =divide(a,b);
    printf("%d / %d = %d",a,b,result);
     
    return 0;
}
int plus(int a,int b)
{
    return a + b;
}
int minus(int a,int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}