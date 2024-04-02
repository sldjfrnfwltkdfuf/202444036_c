#include <stdio.h>

int main()

{ 
    int a;
    printf("단을 입력하시오");
    scanf("%d",&a);

    for(int i=1; i<=9; i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }

    return 0;
}
