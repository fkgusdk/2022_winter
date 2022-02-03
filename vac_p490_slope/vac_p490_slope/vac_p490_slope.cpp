#include <stdio.h>
#include <iostream>

void slope(int, int, int, int, float *, float *);
int main()
{
    std::cout << "\n page 490 기울기 예제 - 한 함수가 여러 값을 반환해야 할 때 포인터로 간접 반환해보기\n\n";

    int x1, y1, x2, y2; // (x1,x2) , (x2,y2)

    printf(" 점 1 의 좌표 : ");
    scanf_s("%d %d", &x1, &y1);

    printf(" 점 2 의 좌표 : ");
    scanf_s("%d %d", &x2, &y2);

    float s, yintercept; //기울기, y절편
    slope(x1, y1, x2, y2, &s, &yintercept); // slope에서 반환 받고 싶은 값 s, yintercept는 주소를 보내주기

    printf(" 기울기 :%f \n y절편 : %f", s, yintercept);
}

void slope(int x1, int y1, int x2, int y2, float *s, float *yintercept) { //s, yintercept의 주소를 저장해 해당 주소에 직접 저장 -> 반환 값 없지만 반환 효과 O
    *s = (float)(y1 - y2) / (float)(x1 - x2);
    *yintercept = y1 - (*s) * x1;
}

