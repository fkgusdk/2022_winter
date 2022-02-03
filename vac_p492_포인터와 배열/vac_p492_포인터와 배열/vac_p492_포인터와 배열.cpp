
#include <stdio.h>
#include <iostream>

int main()
{
    std::cout << "\n page 492 - 배열과 포인터의 관ㄱㅖ\n\n";

    //배열의 이름은 해당 배열이 시작되는 주소를 담고 있다고 생각하면 좋다. (배열 이름이 포인터)
    int arr[5] = { 10,20,30,40,50 };

    printf(" arr = { ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("} \n\n");
    printf(" &arr[0] 출력하면? -> %u \n", &arr[0]); //원래 주소 출력하려면 %p 써야하는데 그냥 정수형으로 출력함
    printf(" &arr[1] 출력하면? -> %u \n", &arr[1]);
    printf(" &arr[2] 출력하면? -> %u \n", &arr[2]);

    printf(" arr 출력하면? -> %u \n\n", arr); //배열의 이름은 해당 배열이 시작되는 주소와 같다.

    printf(" arr+1 = %u \n", arr + 1); // a+1 = &a[1]
    printf(" arr+2 = %u \n\n", arr+2); // a+1 = &a[2]

    printf(" *arr = %u \n", *arr); // = a[0]
    printf(" *(arr+1) = %u \n\n", *(arr + 1)); // = a[1]

    printf(" *arr+1 = %u \n", *arr+1);



    /* 알 수 있는 것
    * 1.배열의 요소들은 메모리에서 연속된 공간을 차지하고 있다.
    * 2. 배열의 이름은 해당 배열이 시작되는 주소와 같다. (배열 이름을 포인터 처럼 사용할 수 있다)
    * 
    * 주의할 점 :
    * 배열의 이름에 다른 변수의 주소 대입할 수 x (포인터 상수 - 자동으로 const 처리된다고 생각하자.)
    * 즉, int a[5]; ++a; -> 오류!
    */
}

