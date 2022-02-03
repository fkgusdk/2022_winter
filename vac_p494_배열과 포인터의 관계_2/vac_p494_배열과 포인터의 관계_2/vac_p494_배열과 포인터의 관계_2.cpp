
#include <stdio.h>
#include <iostream>

int main()
{
    std::cout << "\n page 494 - 배열과 포인터의 관계 2 \n\n";

    //포인터를 배열 이름처럼 사용

    int a[5] = { 10,20,30,40,50 };
    int* p = NULL;

    p = a; // a는 바꿀 수 없지만 p는 바꿀 수 있다 (배열의 이름은 포인터 상수이므로)

    printf(" a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
    printf(" p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

    p[0] = 60; p[1] = 70; p[2] = 80;

    printf(" p[0] = 60; p[1] = 70; p[2] = 80; 실행 이후 \n\n");

    //p와 a는 같은 주소를 공유하므로 둘 중 하나가 바뀌면 둘 다 바귐
    printf(" a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
    printf(" p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

    return 0;
}

