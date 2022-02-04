
#include <iostream>
#include <stdio.h>
#include <conio.h> // getch() & putch()

int main()
{
    std::cout << "\n page 526 - 문자열 입출력 연습 \n\n";

    // ========== getchar() 와 putchar() : 버퍼 메모리 사용 (엔터 쳐야 전달) ============
    int ch1; // 겟챠가 정수형을 반환함 & 정수형으로 해야 EOF(crtl + v) 검사해서 중지 시킬 수 있음

    printf(" getchar() 이용 중 : 종료를 원하면 다른 문자없이 ctrl + v 를 입력하세요! \n\n");

   while((ch1 = getchar()) != EOF) putchar(ch1);
    /* 첫 getchar실행에서 문자열 입력 받고
    * 다음 getchar에서 버퍼 메모리에 있던 문자를 하나씩 반환해 ch1 에 저장
    */
    // ========== _getch() 와 _putch() : 버퍼 메모리 사용 x =============
    // EOF 사용 불가능 (문자단위 출력하기 때문)
    int  ch2; // _getch() 가 정수형을 반환함

    printf("\n\n _getch() 이용 중 : 종료를 원하면 q를 입력하세요! \n\n");

    while ((ch2 = _getch()) != 'q' ) _putch(ch2);

    return 0;
}


