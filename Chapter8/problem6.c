#include <stdio.h>

/**
 * 하나의 정수 x를 입력 받아 다음의 함수 결과를 출력하는 프로그램
 * 2x^2 - 5x + 1
*/

int func1(int x);
int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d", func1(n));

    return 0;
}

int func1(int x){return (2 * x * x - 5 * x + 1);}