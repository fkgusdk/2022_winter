// p528 문자열 입출력 연습
#include <stdio.h>

int main() {
	printf("\n 528 페이지 문자열 입출력 연습 \n\n");

	char name[100]; // 반드시 공간을 할당해야 함 (공간의 크기 지정 필수)
	char email[100];

	printf(" 이름 : ");
	gets_s(name, 100); // 엔터 입력시 자동으로 \0 추가해 저장

	printf(" 주소 ( @ 을 포함하여 입력해주세요. ) : ");
	gets_s(email, 100); // 엔터 입력시 자동으로 \0 추가해 저장

	printf(" \n\n >>> 입력 내용 확인 >>> \n\n 이름 : ");
	puts(name); // \0 을 \n으로 취급해 문자열 출력 후 한 줄 바꿈
	printf(" E - mail : ");
	puts(email);

	return 0;

}