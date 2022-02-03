#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void getSensorData(double*);
int main()
{
    std::cout << "\n page 501 - 자율주행 자동차 예시 \n\n";

    double sensorData[4]; //센서의 데이터를 저장할 배열
    
    getSensorData(sensorData); // 센서로 부터 데이터 받아오기 ( 함수로 배열의 이름, 즉 배열의 주소 전달 )

    printf(" 좌측 장애물과의 거리 : %lf m \n", sensorData[0]);
    printf(" 우측 장애물과의 거리 : %lf m \n", sensorData[1]);
    printf(" 전방 장애물과의 거리 : %lf m \n", sensorData[2]);
    printf(" 후방 장애물과의 거리 : %lf m \n\n", sensorData[3]);

    for (int i = 0; i < 4; i++) { // 너무 가까우면 주의 문구
        if (sensorData[i] < 2) printf(" 사고 위험 !!! 주의하세요 !!!\n\n");
    }

    return 0;
}

void getSensorData(double* p) { // 센서

    srand((double)time(NULL)); //랜덤함수 seed 초기화

    p[0] = rand()%100; // 좌
    *(p + 1) = rand() % 100; // 우
    p[2] = rand() % 100; // 전방
    *(p + 3) = rand() % 100; // 후방
}
