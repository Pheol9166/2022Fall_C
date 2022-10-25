#include <stdio.h>

/**
 * 임의의 정수 N1, N2를 입력 받아 N1단부터 N2단까지의 구구단을 다음과 같이 출력하는 프로그램을 작성하시오
 * N1 N2는 2와 9사이, N1 <= N2
 * 한 줄에서 각 단은 공백으로 구분하고 출력에서 곱하기 기호는 영어 x
*/

int main()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    for (int i = 1; i < 10; i++)
    {
        for (int j = n1; j <= n2; j++)
        {
            printf("%dX%d=%d ", j, i, j * i);
        }
        printf("\n");
    }
}