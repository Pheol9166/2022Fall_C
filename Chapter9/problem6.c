#include <stdio.h>

/**
 * N개의 정수를 받아 배열에 저장(N <= 50), 값을 교환하고 싶은 a, b 입력. a, b 위치 요소 값 교환
 * swap 함수 사용
*/

void swap(int *a, int *b);

int main()
{
    int n;
    int a, b;
    int arr[50];

    scanf("%d", &n);
    for (int *ptr = arr; ptr < arr + n; ptr++) scanf("%d", ptr);
    
    scanf("%d %d", &a, &b);
    swap(&arr[a], &arr[b]);
    
    for (int *ptr = arr; ptr < arr + n; ptr++) printf("%d ", *ptr);
    
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
