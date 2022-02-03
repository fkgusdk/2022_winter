
#include <stdio.h>
#include <iostream>

void change(int []);
int main()
{
    std::cout << "\n page 495 - 배열 매개변수 연습 \n\n";

    int a[5] = { 10,20,30,40,50 };

    printf(" a = { ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("} \n\n");

    change(a); //배열 주소 (배열 이름) 전달

    printf(" 최종 결과 >>> \n\n");
    printf(" a = { ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("} \n");
}

void change(int b[]) { // void func(int *b) 로 대체 가능
    //이때 b는 배열을 가리키는 포인터로 동작
    *b = 1;
    printf(" *b = 1 실행 >> b[0] = %d\n", b[0]);

    *(b + 1) = 2;
    printf(" *(b+1) = 2 실행 >> b[1] =  %d\n", b[1]);

    b[3] = 3;
    printf(" b[3] = 3 실행 >> b[3] = %d\n\n", b[3]);
}

