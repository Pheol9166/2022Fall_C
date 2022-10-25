#include <stdio.h>

/**
 * 1~9 사이 정수 N을 입력받아, 예시와 같이 높이가 N인 사각형을 출력하는 프로그램을 작성하시오.
*/

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < i + n; j++)
        {
            if (j > n) printf("%d", j - n);
            else printf("%d", j);            
        }
        printf("\n");
    }
}