#include <stdio.h>
/**
 * 0 ~ 99999 사이 정수 입력 받아 각 자리 분리 출력하는 프로그램
*/
int main()
{
    int n;

    scanf("%d", &n);

    printf("%d만%d천%d백%d십%d", n / 10000, n % 10000 / 1000, n % 1000 / 100, n % 100 / 10, n % 10);
}