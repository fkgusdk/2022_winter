
#include <iostream>
#include <stdio.h>

void hanoi(int, char, char, char);
int move = 0;

int main()
{
    std::cout << "\n순환함수를 이용한 하노이탑 문제\n\n";

    printf("판의 개수는 총 몇개 인가요? ");
    int N;
    scanf_s("%d", &N);
    printf("\n\n============================\n\n");
    hanoi(N, 'A', 'B', 'C');
    printf("총 %d 번 옮겼습니다.\n\n", move);

    return 0;
}

void hanoi(int n, char from, char tmp, char to) {
    if (n == 1) { 
        printf("판 1을 %c 에서 %C 로 옮깁니다.\n\n\n", from, to); 
        move++;
    }
    else {
        hanoi(n-1, from, to, tmp);
        printf("%d번 판을 %c 에서 %c 로 옮깁니다.\n\n\n",n,from,to);
        move++;
        hanoi(n - 1, tmp, from, to);
    }
}

