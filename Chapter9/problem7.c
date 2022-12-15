#include <stdio.h>

/**
 * 크기 3의 int형 배열의 중앙값 출력
 * mid 함수 작성
 *  - 정수의 이동 없이 위치만 찾아낼 것
*/

int* mid(int *arr);

int main()
{
    int arr[3];

    for (int *ptr = arr; ptr < arr + 3; ptr++) scanf("%d", ptr);
    printf("%d", *mid(arr));

    return 0;
}
int* mid(int *arr)
{
    int cnt = 0;

    for (int *ptr = arr; ptr < arr + 3; ptr++)
    {
        for (int *ptr2 = arr; ptr2 < arr + 3; ptr2++)
        {
            if (*ptr2 > *ptr) cnt++;
        }
        if (cnt == 1) return ptr;

        cnt = 0;
    }
}