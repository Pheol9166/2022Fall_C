#include <stdio.h>

/**
 * 정수 n을 입력받아 20 ~30 사이면 1 아니면 0 출력
*/
int main()
{
    int n, result;

    scanf("%d", &n);
    
    result = n >= 20 && n <= 30 ? 1 : 0;
    printf("%d", result);
}