#include <stdio.h>

int main()
{
    int x,y;
    char op;
    scanf("%d %c %d",&x, &op, &y);
    switch (op)
    {
    case '+':
         printf("%d %c %d=%d\n",x, op,y,x+y);    
         break;
    case '-':
         printf("%d %c %d=%d\n",x, op,y,x-y);
        break;
    case '*':
        printf("%d %c %d=%d\n",x, op,y,x*y);
        break;
    case '/':
         printf("%d %c %d=%d\n",x, op,y,x/y);
        break;
    default:
        printf("+ - * / 만 계산 가능합니다");
        break;

    
    }

    return 0;

}
        