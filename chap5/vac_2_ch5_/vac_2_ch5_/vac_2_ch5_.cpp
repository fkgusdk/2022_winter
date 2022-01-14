
#include <iostream>
#include <stdio.h>

int main()
{
    std::cout << "5장 부터\n\n";

    // 정수 & 실수 나눗셈 연습
    int Int1, Int2;
    double floatNum;
    printf("정수 2개 입력 : ");
    scanf_s("%d %d", &Int1, &Int2);
    printf("실수 1개 입력 : ");
    scanf_s("%lf", &floatNum); //실수형 입력 받을 대는  %lf 사용

    printf("\n\n정수 나눗셈 : %d / %d = %d \n\n", Int1, Int2, Int1 / Int2); //결과값 부분 %f 로 바꾸면 결과 이상하게 나옴
    printf("실수 나눗셈 : %f / %d = %f \n\n", floatNum, Int1, floatNum / Int1); //결과값 부분 %d 로 바꾸면 결과 이상하게 나옴

    // 증감 연산자 연습
    int x = 10;
    printf("x=10 일 때 y = x++ 의 y 값 : %d \n\n", x++);
    x = 10;
    printf("x=10 일 때 y = ++x 의 y 값 : %d \n\n", ++x);

    // 복합 대입 연산자 연습
    x = 10; int y = 2;
    printf("x = %d & y = %d \n", x,y);
    x *= y + 1;
    printf("x *= y+1 실행 후 x = %d\n\n", x);

    // 논리 연산자 연습
    int T, F, result;
    T = 1; F = 0;
    result = T || F;
    printf("true || false  ---->   %d\n", result);
    result = T && F;
    printf("true && false  ---->   %d\n\n", result);

    //단축계산 연습
    int z = 100;
    x = 1; y = 0;

    printf("z 초기값 : %d\n", z);
    result = ++z && y && ++z;
    printf("++z && 0 && ++z 시행했다면 -----> z = %d \n", z);

    z = 100;
    result = 0 || 1 || ++z;
    printf("0 || 1 || ++z 시행했다면 -----> z = %d \n\n", z);
}





// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴



// 시작을 위한 팁: 
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
