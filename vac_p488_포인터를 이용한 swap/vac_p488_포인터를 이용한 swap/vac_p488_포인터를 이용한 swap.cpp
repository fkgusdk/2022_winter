#include <stdio.h>
#include <iostream>

void swap(int*, int*); // 매개변수도 포인터 변수형으로 넣어줘야 함
int main()
{
    std::cout << "\n page 488 - 포인터를 이용한 swap (포인터 연습)\n\n";

    int num1 = 10, num2 = 20;
    printf(" swap 전 a,b : %d, %d \n", num1, num2);

    swap(&num1, &num2); // 변수의 주소를 전달 !!!
    printf(" swap 후 a,b : %d, %d \n", num1,num2);
}

void swap(int* a, int* b) { // 두 값을 바꿔주는 함수 (두 값의 주소를 받아 원본 값을 바꿀 수 있음)
    int temp = *b; //temp 는  b에 담긴 주소에 담긴 값 저장
    *b = *a; // b에 담긴 주소에 담긴 수를 *a로 교체
    *a = temp; // a에 담긴 주소에 담긴 수를 temp로 교체

    /*int temp = b;
    * b = a;
    * a = temp;
    * 이렇게 하면 a와 b값만 바뀌는 것, num1과 num2의 주소가 바뀌는 것이 아님에 주의 !!!
    */
}