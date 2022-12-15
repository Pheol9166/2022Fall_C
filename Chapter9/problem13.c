#include <stdio.h>

/**
 * 10개의 정수를 입력받아 내림차순 정렬, 출력
 * ABC 함수를 9번 반복
*/
void ABC(int *s, int k);

int main()
{
    int arr[10];

    for (int *ptr = arr; ptr < arr + 10; ptr++) scanf("%d", ptr);
    for (int i = 10, *ptr = arr; i >= 2; i--, ptr++) ABC(ptr, i);
    for (int *ptr = arr; ptr < arr + 10; ptr++) printf("%d ", *ptr);

    return 0;
}
void ABC(int *s, int k)
{
    int temp = 0;
    int max = *s;
    int *pmax = s;

    for (int *ptr = s; ptr < s + k; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
            pmax = ptr;
        }
    }

    temp = *s;
    *s = max;
    *pmax = temp;
}