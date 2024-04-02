#include <stdio.h>

int main(void)
{
    char ch;
    char str[11]; // 문자열을 저장할 배열의 크기는 문자열 길이에 NULL 문자('\0')를 추가한 크기여야 합니다.

    printf("1. 문자 입력: ");
    scanf(" %c", &ch); // 공백을 추가하여 입력 버퍼를 비웁니다.

    printf("2. 문자열 입력: ");
    scanf("%10s", str); // 최대 10개의 문자를 입력받고 NULL 문자('\0')로 끝나는 문자열로 저장합니다.

    printf("입력한 문자 출력: %c\n", ch);
    printf("입력한 문자열 출력: %s\n", str);
    
    return 0;
}
