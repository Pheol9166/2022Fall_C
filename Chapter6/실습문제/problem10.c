#include <stdio.h>

/**
 * 3~18 사이의 정수 N을 입력받아 3개의 주사위 A, B, C의 총 합이 N이 되는 모든 경우를 출력하는 프로그램을 작성하시오
 * 단, 한 줄의 숫자를 3자리 정수로 간주했을 때, 오름차순으로 출력
*/

int main()
{
    int n;
    int a, b, c;

    scanf("%d", &n);

    for (a = 1; a <= 6; a++)
    {
        for (b = 1; b <= 6; b++)
        {
            for (c = 1; c <= 6; c++)
            {
                if (a + b + c == n) printf("%d %d %d\n", a, b, c);
            }
        }
    }
}