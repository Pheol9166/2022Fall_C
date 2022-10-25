#include <stdio.h>

/**
 * 음료의 종류를 나타내는 1~3 사이 정수 n과 투입한 금액 m(100의 배수)을 입력받고 선택한 음료의 이름과 잔돈의 개수를 출력하는 프로그램
 * 잔돈은 500원과 100원만 있고 100원 5개 주는 건 불가능
 * 1. Americano (500원)
 * 2. Cafe Latte (400원)
 * 3. Lemon Tea (300원)
*/

int main()
{
    int order;
    int money;

    scanf("%d", &order);
    scanf("%d", &money);

    if (order == 1)
    {
        money -= 500;
        printf("Americano\n");
        printf("%d %d", money / 500, money % 500 / 100);
    }

    else if (order == 2)
    {
        money -= 400;
        printf("Cafe Latte\n");
        printf("%d %d", money / 500, money % 500 / 100);
    }

    else
    {
        money -= 300;
        printf("Lemon Tea\n");
        printf("%d %d", money / 500, money % 500 / 100);
    }
}