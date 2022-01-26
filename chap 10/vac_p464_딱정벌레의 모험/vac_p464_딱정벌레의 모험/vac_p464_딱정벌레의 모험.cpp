
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    std::cout << "\n 페이지 464 딱정 벌레의 모험!\n\n";

    int road[8][8]; // 길 표시할 테이블
    for (int i = 0; i < 8; i++) { //테이블 초기화
        for (int j = 0; j < 8; j++) {
            road[i][j] = 0;
        }
    }

    int row, col; //딱정벌레가 간 위치의 좌표
    srand((double)time(NULL));
    row = rand() % 8;
    col = rand() % 8;

    int move, num = 0; // 이동 방향 move (1~8), 해당 위치의 방문 순서 num
    while (row < 8 and row >= 0 and col < 8 and col >= 0){
        num++;
        road[row][col] = num;

        move = rand() % 8 + 1;

        switch (move) {
        case 1:
            --col;
            break;
        case 2:
            --col;
            --row;
            break;
        case 3:
            --row;
            break;
        case 4:
            --row;
            ++col;
            break;
        case 5:
            ++col;
            break;
        case 6:
            ++row;
            ++col;
            break;
        case 7:
            ++row;
            break;
        case 8:
            ++row;
            --col;
            break;
        }
    }
    for (int r = 0; r < 8; r++) { // 딱정벌레의 이동 출력
        for (int c = 0; c < 8; c++) {
            printf("%4d", road[r][c]);
        }
        printf("\n");
    }
}


