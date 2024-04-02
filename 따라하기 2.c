#include <stdio.h>

int plus(int a)
{
    a++;
    return a;
}
int main(void)
{
    int a=10,b=20;
    int after_a;

    //scanf("%d %d",&a,&b);
    after_a = plus(10);
    printf("%d",after_a);
    return 0;
}