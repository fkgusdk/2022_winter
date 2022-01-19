
#include <iostream>
#include <stdio.h>

int data1 = 1; // 외부에서 사용 가능
static int data2; //외부에서 사용 불가능

extern void respond(); //외부에서 함수 불러오기
int main()
{
    std::cout << "변수 내외부 연결 연습\n\n";

    int before1 = data1; //지역변수
    int before2 = data2;
    
    printf("file 2 에서 변수 변경 요청! \n\n");
    respond();
    printf("공통변수가 변경됩니다...\n\n");
    
    printf("data 1 : ");
    if (data1 == before1) printf("file 2 변경 권한 없음 \n\n");
    else printf("%d -------> %d \n", before1, data1);

    printf("data 2 : ");
    if (data2 == before2) printf("file 2 변경 권한 없음 \n\n");
    else printf("%d -------> %d \n\n", before2, data2);

    return 0;
}


