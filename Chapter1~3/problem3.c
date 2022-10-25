#include <stdio.h>
// 반올림
int main()
{
    double n;
    int result;

    scanf("%lf", &n);
    
    result = (int)(n + 0.5);
    printf("반올림 정수 출력-> %d\n", result);
}