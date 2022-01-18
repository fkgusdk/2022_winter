
#include <stdio.h>
#include <iostream>
#include <stdlib.h> // 랜덤 함수 헤더 파일

int main()
{
    std::cout << "304 페이지 수학문제 자동생성 예제 연습\n\n";

    srand(time(NULL)); //난수 발생기 초기화
   
    int x, y, answer;

    x = rand() % 10; //0~9 사이의 난수
    y = rand() % 10; //0~9 사이의 난수
    printf("%d + %d = ?\n\n", x, y);

    scanf_s("%d", &answer); // answer = scanf_s("%d", &answer); 이거 아님!! 제발...

    if (answer == x + y)
        printf("정답입니다!\n\n");
    else
        printf("틀렸습니다. 정답은 %d 입니다.\n\n", x+y);

    return 0;

}


