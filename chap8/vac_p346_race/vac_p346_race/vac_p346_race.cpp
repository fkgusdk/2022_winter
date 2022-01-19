
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //랜덤함수 헤더파일
#include <time.h> // 타임 함수 헤더파일
#include <conio.h> //for lime 40

void distance(int carNum, int d) {
    printf("Car %d : ", carNum);
    for (int i = 0; i < d; i++) {
        printf("*");
    }
    printf("\n\n");
}

int Winner(int d1, int d2) {
    if (d1 > d2) return 1;
    else if (d1 < d2) return 2;
    else return 0;
}

int main()
{
    std::cout << "346 페이지 자동차 경주 예제\n\n";

    int dist1 = 0, dist2 = 0;
    int winner;
    int t = 1;
    srand((unsigned(time(NULL))));

    for (int i = 0; i < 10; i++) {
        dist1 += rand() % 10 + 1;
        dist2 += rand() % 10 + 1;
        printf("----------- After %d sec ----------- \n\n", t);
        distance(1, dist1); distance(2, dist2);
        winner = Winner(dist1, dist2);
        if (winner == 0) printf("Match Point!!!\n\n");
        else printf("Car%d is ahead!\n\n", winner);
        t++;
        _getch(); //사용자가 아무 키나 누를 때 까지 기다리기
    }
    printf("============  End  ============\n\n");
    if (winner == 0) printf("Tied\n\n");
    else printf("          Car%d Win!\n\n", winner);
    return 0;
}