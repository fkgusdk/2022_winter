#include <stdio.h> // c언어
#include <iostream> // c++
#define SangSoo1 10 //상수선언 방법1

int main()
{
    int num = 0;
    const int SangSoo2 = 10; //상수선언 방법 2 -> 이게 좀 더 선호됨?:"
    scanf_s("%d", &num);
    printf("You enter %d in num\n", num*SangSoo1);
    printf("%d", SangSoo2);

    char char_1 = 65;
    char char_2 = 'A'; //작은 따옴표로 작성

    printf("char_1 : %c , char_2 : %c \n", char_1, char_2);

    char beep = 7; //삐 소리의 아스키코드 7
    printf("%c 소리 남\n", beep); // 삐 소리
    printf("\a 소리남\n");

    // char형도 아스키코드 값을 이용해 정수 처럼 계산 가능
    char testChar = 70;
    printf("%d %d \n", testChar + 1, testChar + 2); // 71 72
    printf("%c %c", testChar + 1, testChar + 2); // G H
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

/*여러줄 주석할 때는 이걸로*/

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
