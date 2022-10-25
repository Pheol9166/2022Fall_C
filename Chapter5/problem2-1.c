#include <stdio.h>
/**
 * problem2 -> n제곱 버전 몇 제곱인지 출력(30제곱 이하)
*/
int main()
{
    int n, m, temp;
    int check = 0;
    int count = 0;


    scanf("%d %d", &n, &m);

    if (m >= n) 
    {
        temp = m;
        m = n;
        n = temp;
    }
    // printf("%d %d", n, m);

    while (n > 0)
    {
        if (n % m == 0)
        {
            check = 1;
            count++;
        }
        n /= m;
    }

    if (check == 1) printf("%d", count);
    else printf("none");
}