
#include <stdio.h>
#include <iostream>

void binary(int);
int main()
{
    std::cout << "\n400 페이지 이진수 만들기 연습 \n알고리즘 신기함\n\n";
    // 2로 나눈 나머지를 역순으로 출력

    int num;
    printf("이진수로 바꿀 수를 입력해주세요 : ");
    scanf_s("%d", &num);

    printf("\n%d 를 이진수로 바꾼 결과 : ", num);
    binary(num);
    printf("\n");
}

void binary(int n) {
    if (n > 0) {
        binary(n / 2); //순환함수
        printf("%d", n % 2);
    }
}

