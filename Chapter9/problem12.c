#include <stdio.h>

/**
 * N개 정수를 입력받아 (N <= 100) 배열에 저장하고 (d[0]) + (d[0] + d[1]) + ... + (d[0] + d[1] + ... + d[N-1])을 구하시오.
*/
int add_to_k(int *s, int *e);

int main()
{
    int n;
    int result = 0;
    int arr[100];

    scanf("%d", &n);
    for (int *ptr = arr; ptr < arr + n; ptr++) 
    {
        scanf("%d", ptr);
        result += add_to_k(arr, ptr);
    }
    
    printf("%d", result);

    return 0;
}
int add_to_k(int *s, int *e)
{
    int sum = 0;

    for (int *ptr = s; ptr <= s + (e - s); ptr++) sum += *ptr;

    return sum;
}
