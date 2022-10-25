#include <stdio.h>
/**
 * 10000 ~ 99999 사이의 양의 정수 n 입력 후 100의 자리에서 반올림
*/
int main()
{
    int n;
    double result;
    scanf("%d", &n);

    result = (double)n / 1000 + 0.5;
    
    printf("%d", (int)result * 1000);
}