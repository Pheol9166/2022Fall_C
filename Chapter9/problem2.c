#include <stdio.h>

/**
 * N개의 정수를 입력받은 후(N <= 50) 0이 나오기 전까지 정수 개수 출력
 * 포인터 사용
*/

int main()
{
    int n;
    int count = 0;
    int arr[50];

    scanf("%d", &n);

    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (*ptr == 0) break;
        scanf("%d", ptr);
        count++;
    }
    printf("%d", count);

    return 0;
}