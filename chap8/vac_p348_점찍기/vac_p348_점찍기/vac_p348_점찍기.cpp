
#include <iostream>
#include <stdio.h>
#include <windows.h> //GDI 그래픽을 사용하기 위한 헤더파일
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    std::cout << "348 페이지 점찍기 예제 \n\n";

    int x, y, R, G, B;
    HDC hdc;
    hdc = GetWindowDC(GetForegroundWindow());

    srand((unsigned)time(NULL));
    for (int i = 0; i < 10000; i++) {
        x = rand() % 300;
        y = rand() % 300;

        R = rand() % 256;
        G = rand() % 256;
        B = rand() % 256;

        SetPixel(hdc, x, y, RGB(R, G, B));
    }
    _getch();
    return 0;
}

