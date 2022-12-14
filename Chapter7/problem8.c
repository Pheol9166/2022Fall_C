#include <stdio.h>

/**
 * 5개의 정수를 입력 받아 배열에 저장한 후, 다음과 같이 인접한 원소를 교환하여 가장 큰 수를 맨 뒤로 이동시키는 프로그램을 작성하시오.
 * 아래 교환 연산을 0번 원소부터 마지막 바로 전 원소까지 반복
 *  - 0번 원소와 1번 원소를 비교하여 0번 원소가 크면 서로 위치 교환
 *  - 위 비교 및 교환 후, 1번 원소와 2번 원소에 대해 동일한 작업 수행
 *  - 동일한 방식으로, 마지막 바로 전 원소와 마지막 원소 비교 및 교환
*/
int main()
{
    int arr[5];
    int temp = 0;

    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1]) 
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;            
        }
    }

    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);

    return 0;
}