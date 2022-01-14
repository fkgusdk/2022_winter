
#include <iostream>
#include <stdio.h>

int main()
{
    std::cout << "202 페이지 XOR을 이용한 암호화 예제 연습\n\n";

    char data = 'a';
    char key = 0xff;

    char secret = data ^ key;
    printf("암호화 결과 : %c \n\n", secret);

    char originData = secret ^ key;
    printf("원래 값 : %c", originData);

    return 0;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴


//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
