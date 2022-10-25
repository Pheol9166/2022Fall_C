#include <stdio.h>

/**
 * 원 둘레 입력 받아 넓이 소수 첫째 자리에서 반올림해서 출력
*/
int main()
{
    double n, r, width;

    scanf("%lf", &n);

    r = n / 3.14 / 2;

    width = r * r * 3.14;
    width = width + 0.5;

    printf("%d", (int)width);
}