#include <stdio.h>

/**
 * 금액을 나타내는 양의 정수 N 입력, A(900원), B(750원), C(200원)의 세 가지 상품을 아래 조건을 만족하도록 구매하는 방법을 출력하는 프로그램 작성
 * 조건
 *  잔돈은 남기지 않아야 한다
 *  A, B, C 각 상품은 최소 한 개 이상 구매
 *  B 상품은 항상 짝수 개로 구매
 *  C 상품은 A상품보다 작거나 B 상품보다 작다
 *  위 조건을 만족하는 방법이 없는 경우에는 none을 출력
*/

int main()
{
    int n = 0;
    int a = 900, b = 750, c = 200;
    int check = 0;
    scanf("%d", &n);

    for (int a_n = 1; n - (a * a_n) > 0; a_n++)
    {
        for (int b_n = 2; n - (b * b_n) > 0; b_n += 2)
        {
            for (int c_n = 1; n - (c * c_n) > 0; c_n++)
            {
                if (a * a_n + b * b_n + c * c_n == n)
                {
                    if ((c_n < a_n) || (c_n < b_n))
                    {
                        printf("%d %d %d\n", a_n, b_n, c_n);
                        check = 1;
                    }
                }
            }
        }
    }
    
    if (!check)
        printf("none\n");

    return 0;
}