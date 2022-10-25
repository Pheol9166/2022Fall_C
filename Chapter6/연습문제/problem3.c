#include <stdio.h>

/**
 * 팩토리얼 계산
*/
int main()
{
    int n;
    int result = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) result *= i;

    printf("%d", result);
}