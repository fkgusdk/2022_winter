
#include <stdio.h>
#include <iostream>

int main()
{
    std::cout << "chap 6\n\n";
    printf("스위치문 연습 - 249 페이지 달의 일수 세기\n\n");

    int month, days;
    printf("달을 입력해주세요 : ");
    scanf_s("%d", &month);

    switch (month) {
    case 2: days = 28; break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: days = 31; break;

    default: days = 30; break;
    }

    printf("%d 월은 %d 일 까지 있습니다. \n\n", month, days);
    return 0;

    // switch를 쓸 수 있다면 쓰는 것이 좋음 ( if-else 보다 약간 더 효율적)
    //switch( .. )에는 정수 값, 또는 정수값이 나오는 것이 들어가야 함
    // case 뒤에는 실수나 변수,수식, 문자열 쓸 수 없음! 문자 하나는 ㄴ아스키 코드로 나타낼 수 있기 대문에 사용 가능 (오직 정수와 문자 하나)
    // 범위를 다뤄야 할 때는 쓰지 않는 것이 좋다.

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
