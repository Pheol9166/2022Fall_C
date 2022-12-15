#include <stdio.h>

/**
 * 5개 정수 입력 내림차순 저장 출력.
 * 등수 배열 저장, 각 인덱스에 맞춰 출력
 * 포인터 사용
*/

int main()
{
    int arr[5] = {0};
    int rank[5] = {0};
    int cnt;

    for (int *ptr = arr, *ptr2 = rank; ptr < arr + 5; ptr++, ptr2++) 
    {
        scanf("%d", ptr);
        *ptr2 = *ptr;
    }
    for (int *ptr = arr, *r = rank; ptr < arr + 5; ptr++, r++)
    {
        cnt = 0;
        for (int *ptr2 = arr; ptr2 < arr + 5; ptr2++)
        {
            if (*ptr2 > *ptr) cnt++;
        }

        *r = cnt + 1;
    }

    for (int *r = rank; r < rank + 5; r++) printf("%d ", *r);

    return 0;
}
