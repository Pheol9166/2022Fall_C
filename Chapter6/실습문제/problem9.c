#include <stdio.h>

/**
 * 2 이상의 정수를 입력 받아 소인수분해하여 예시와 같은 형식으로 출력하는 프로그램 작성
 * input: 40 (2^3 * 5^1)
 * output: 2 3 
 *         5 1
*/

int main()
{
    int n;
    int i = 2;
    int count = 0;

    scanf("%d", &n);

    while (n != 1)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }

        if (count) printf("%d %d\n", i, count);

        count = 0;
        i++;
    }
}