#include <stdio.h>

/**
 * 하나의 양의 정수 X를 입력 받아 다음 수식의 결과를 출력하는 프로그램을 작성하시오
 * 1 + (1 + 2) + (1 + 2 + 3) ...
*/
int sum(int);
int main()
{
    int n;
    int result = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) result += sum(i);

    printf("%d", result);
}
int sum(int n) {return n * (n + 1) / 2;}