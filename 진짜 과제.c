#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("정수를 입력하세요 (0 입력시 종료): ");

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
    }

    printf("입력한 숫자의 합: %d\n", sum);

    return 0;
}