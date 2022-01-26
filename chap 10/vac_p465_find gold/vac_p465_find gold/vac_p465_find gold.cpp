
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int find_Gold(int x, int y, char m[10][10]) {

    if (m[x][y] == 'G') {
        printf("\n\n Congratulatons! You finally find Goooold !!! \n\n");
        return 0;
    }
    else if (m[x][y] == 'M') {
        printf("\n\n You're eaten by mine Monsters :( \n\n");
        return 0;
    }
    else {
        m[x][y] = 'Y';
        printf("\n ============================ \n");
        // 광산 구조 출력
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%2c", m[i][j]);
            }
            printf("\n");
        }

        // 이동하기
        char move;
        int originX = x, originY = y;
        do {
            x = originX; y = originY;
            move = _getch();
            switch (move) {
            case 'b':
                x--;
                break;
            case 'f':
                x++;
                break;
            case 'l':
                y--;
                break;
            case 'r':
                y++;
                break;
            }
            if (x < 0 or x > 9 or y < 0 or y > 9) {
                printf("\n No path there. Try again!\n\n");
            }
            else break;
        } while (true);
        return find_Gold(x, y, m);
    }
}

int main()
{
    std::cout << "\n < 몬스터를 피해 금을 찾자! >\n";

    // 광산 기본 테이블
    char mine[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mine[i][j] = '.';
        }
    }
 
    srand((double)time(NULL)); //램덤 seed 초기화

    // 광산에 몬스터 배정 (M)
    int Mrow, Mcol, monster = 1;
    while (monster < 16) {
        Mrow = rand() % 10;
        Mcol = rand() % 10;

        if (mine[Mrow][Mcol] == 'M') continue;

        mine[Mrow][Mcol] = 'M';
        monster++;
     }

    //광산에 금 배정
    int Grow, Gcol = 0;
    do {
        Grow = rand() % 10 +1;
        Gcol = rand() % 10 +1;
    } while (mine[Grow][Gcol] == 'M');
    mine[Grow][Gcol] = 'G';

    find_Gold(0, 0, mine);

    return 0;
}



