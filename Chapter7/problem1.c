#include <stdio.h>

/**
 * N개(2<=N<=100)의 정수를 입력 받아, 평균보다 큰 입력 정수를 출력하는 프로그램을 작성
*/

int main()
{
    int arr[100];
    int n;
    int mean = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        mean += arr[i];
    }

    mean /= n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mean) printf("%d ", arr[i]);
    }
}
