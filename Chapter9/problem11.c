#include <stdio.h>

/**
 * N개의 정수를 입력 받아 (N <= 100) 배열에 저장, N개 중 S로 시작해서 E까지 요소의 총합을 출력
 * arrsum 함수
*/
int arrsum(int *s, int *e);

int main()
{
    int n, s, e;
    int arr[100];
    int *ptr = arr;

    scanf("%d %d %d", &n, &s, &e);

    for (int *p = arr; p < arr + n; p++) scanf("%d", p);
    printf("%d", arrsum(ptr + s, ptr + e));

    return 0;
}
int arrsum(int *s, int *e)
{
    int sum = 0;

    for (int *p = s; p <= s + (e - s); p++) sum += *p;

    return sum;
}