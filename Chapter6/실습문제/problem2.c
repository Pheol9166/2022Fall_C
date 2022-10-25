#include <stdio.h>

/**
 * 0이 입력될 때까지 정수를 반복해서 입력 받아, 입력된 정수들의 합, 최댓값, 최솟값을 출력하는 프로그램을 작성하시오.
*/

int main()
{
    int n, sum = 0;
    int max, min;

    scanf("%d", &n);
    max = n;
    min = n;
    while (n != 0)
    {
        sum += n;
        if (n >= max) max = n;
        if (n <= min) min = n;
        scanf("%d", &n);
    }

    printf("%d %d %d", sum, min, max);
}