#include <stdio.h>

/**
 * N개의 정수를 두 번 입력 받아 (N <= 20) 역방향으로 더하여 출려갛는 프로그램 작성
*/
void addArray(int *arr1, int *arr2, int *result, int n);

int main()
{
    int n = 0;
    int arr1[20];
    int arr2[20];
    int result[20];
    
    scanf("%d", &n);

    for (int *ptr = arr1; ptr < arr1 + n; ptr++) scanf("%d", ptr);
    for (int *ptr = arr2; ptr < arr2 + n; ptr++) scanf("%d", ptr);
    
    addArray(arr1, arr2, result, n);

    for (int *ptr = result; ptr < result + n; ptr++) printf("%d ", *ptr);

    return 0;
}
void addArray(int *arr1, int *arr2, int *result, int n)
{
    for (int *ptr = arr1, *ptr2 = arr2 + n - 1, *rptr = result; ptr < arr1 + n; ptr++, ptr2--, rptr++)
    {
        *rptr = *ptr + *ptr2;
    }
}