#include <stdio.h>

/**
 * 5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램을 작성하시오.
*/
int main()
{
    int n;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);

        if (n > 0) sum += n;
    }

    printf("%d", sum);
}