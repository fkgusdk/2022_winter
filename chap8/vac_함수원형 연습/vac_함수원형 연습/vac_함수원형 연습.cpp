
#include <iostream>
#include <stdio.h>

void write2();
void write1() {
    printf("---- 함수 1 ----\n  아아, 여기는 함수1 \n  함수 2는 응답하라.\n\n");
    write2();
}

void write2() {
    printf("---- 함수 2 ----\n  여기는 함수 2, 응답가능\n");
}

int main()
{
    std::cout << "\nchap 8의 함수원형 연습\n\n";

    write1();
    return 0;
}

