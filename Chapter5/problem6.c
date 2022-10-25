#include <stdio.h>

/**
 * 3개의 정수를 입력 받고, 최댓값과 최솟값을 차례로 출력하는 프로그램
*/

int main()
{
    int a, b, c, max, min;
    
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) max = a, min = b;
    else max = b, min = a;
    
    printf("%d %d", c > max ? c : max, c < min ? c : min);
}