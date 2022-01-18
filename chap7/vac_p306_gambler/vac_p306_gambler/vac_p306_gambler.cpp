
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SEED 50
#define GOAL 250

int main()
{
    std::cout << "306 페이지 도박 예제 연습\n\n";
    std::cout << "난수를 이용해 확률 표현하는 법이 인상 깊음\n\n";

    printf("초기 자금 : %d $ \n\n", SEED);
    printf("목표 금액 : %d $ \n\n", GOAL);

    int win = 0;
    for (int i = 0; i < 100; i++) {
        int cash = SEED;
        while (cash > 0) {
            if (double(rand()) / RAND_MAX < 0.5) ++cash; //RAND_MAX는 랜덤함수로 만들 수 있는 값 중 최댓값
            else --cash;

            if (cash == GOAL) {
                ++win;
                break;
            }
        }
    }

    printf("100번 중 성공 횟수 : %d \n\n", win);

    return 0;
}


//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
