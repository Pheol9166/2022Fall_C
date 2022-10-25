#include <stdio.h>

/**
 * n, m 을 입력받아서 제곱관계인지 출력하는 프로그램을 만드시오.
*/
int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n > m && m * m == n) printf("%d*%d=%d", m, m, n);
    else if (n < m && n * n == m) printf("%d*%d=%d", n, n, m);
    else printf("none");
}