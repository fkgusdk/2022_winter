
#include <iostream>
#include <stdio.h>

int get_integer() {
    int n;

    printf("검증하고 싶은 정수를 입력하세요 : ");
    scanf_s("%d", &n);

    return n;
}

int check_prime(int num) {
    int i = 2;
    while (i < num / 2) {
        if (num % i == 0) return 0;
        else i++;
    }
    return 1;
}
int main()
{
    std::cout << "336 페이지 소수찾기 예제 \n\n";

    int num = get_integer();

    if (check_prime(num) == 0)
        printf("\n소수가 아닙니다.\n\n");
    else
        printf("\n소수입니다.\n\n");
}

