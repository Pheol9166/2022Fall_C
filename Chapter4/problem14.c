#include <stdio.h>

/**
 * 다른 두 정수 n, m 입력 받고 더 큰 수 출력
*/
int main()
{
    int n, m, result;

    scanf("%d %d", &n, &m);

    result = n >= m ? n : m;
    printf("%d", result);
}