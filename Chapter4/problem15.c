#include <stdio.h>

/**
 * 서로 다른 양의 정수 n, m을 입력받아 큰 수에서 작은 수를 나눈 몫과 나머지를 출력하는 프로그램을 작성
*/
int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    n >= m ? printf("%d\n%d", n / m, n % m) : printf("%d\n%d", m / n, m % n);
}