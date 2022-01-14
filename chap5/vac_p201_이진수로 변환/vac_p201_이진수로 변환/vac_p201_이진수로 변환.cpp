
#include <iostream>
#include <stdio.h>
#define LIMIT 128

int main()
{
    std::cout << "201 페이지 예제 - 이진수로 변환하기 연습\n\n";

    unsigned int num;
    printf("%d 이하의 10진수를 하나 입력해주세요 : ", LIMIT);
    scanf_s("%u", &num);

    unsigned int checkBit = 1 << 7; // limit = 128
    printf("%d 를 이진수로 변환 -----> ", num);

    for (int i = 0; i < 7; i++) {
        ((num & checkBit) == 0) ? printf("0") : printf("1");
        checkBit = checkBit >> 1; // 주의 : 그냥 냅다 checkBIt >> 1 만 쓰면 안 됨! 꼭 대입 다시 해주기
    }
    printf("\n\n");
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
