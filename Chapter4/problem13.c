#include <stdio.h>

/**
 * 양의 정수 N을 입력 받아 짝수면 짝수, 홀수면 홀수를 출력하는 프로그램 작성
*/
int main()
{
    int n;

    scanf("%d", &n);
    
    n % 2 == 0 ? printf("짝수") : printf("홀수");
}