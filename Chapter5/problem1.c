#include <stdio.h>

/**
 * 정수 n을 입력받아 다음을 출력하는 프로그램을 출력하시오.
 * 0 미만 cold, indoor
 * 0 이상 40 미만 moderate, outdoor
 * 40 이상 hot, indoor
*/
int main()
{
    int n;

    scanf("%d", &n);

    if (n < 0) printf("cold, indoor");
    else if (n < 40) printf("moderate, outdoor");
    else printf("hot, indoor");
}