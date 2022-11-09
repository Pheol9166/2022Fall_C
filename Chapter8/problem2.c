#include <stdio.h>

/**
 * 두 개의 양의 정수 A와 B를 입력받아 A부터 B까지의 합을 계산하는 프로그램을 작성하시오.
 * 하나의 정수 n, 반환 int
 * n(n + 1) / 2 공식 이용
*/
int sum(int);
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", sum(m) - sum(n - 1));
}
int sum(int n) {return n * (n + 1) / 2;}