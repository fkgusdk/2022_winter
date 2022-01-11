// vac_p162_solar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int main()
{
    std::cout << "162 페이지의 태양빛 도달 시간 구하는 예제 + 도전 과제 도전!!!\n\n\n";

    // double : 16자리까지 구현 가능
    double light_speed = 300000; // 빛의 속도 (Km/s)
    double distance = 149600000; // 태양과 지구의 거리 (km)

    double time = distance / light_speed; // 태양 빛이 지구에 도달하는 데에 걸리는 시간

    printf("빛의 속도 : %f \n\n", light_speed);
    printf("태양과 지구 사이의 거리 : %f \n\n", distance);
    printf("태양빛 도달 시간 : %f 초 \n\n", time);

    int time_min, time_sec;
    time_min = time / 60;
    time_sec = int(time) % 60;
    printf("이는, %d분 %d초 이다.\n\n", time_min, time_sec);

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴

