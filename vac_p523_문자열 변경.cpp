
#include <stdio.h>
#include <iostream>
#include <string.h>

int main()
{
    std::cout << "\n page 523 - 문자열 변경 연습 \n\n";

    //strcpy() 이용
    char str1[] = "Hello";
    printf(" ctrcpy 이용 전 원본 문자열 : %s \n", str1);

    strcpy_s(str1, "Hi"); //이때 대신 입력될 문자열은 기본의 문자열보다 작거나 같아야 한다.
    printf(" strcpy 이용 후 : %s \n\n", str1);

    //포인터 이용
    char *point = "age 22";
    printf(" 포인터 이용 전 원본 문자열 : %s \n", point);

    point = "age 23";
    printf(" 포인터 이용 후 : %s \n\n", point);
    
    return 0;

}

