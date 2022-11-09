#include <stdio.h>

/**
 * 하나의 양의 정수  N을 입력 받아, 1부터 N까지의 합을 출력하는 프로그램을 작성하시오
 * add 함수 정의 및 사용
 * main 함수에서는 증감연산자만 사용
*/
int add(int, int);
int main()
{
    int n;
    int result = 0;
    int i = 1;
    scanf("%d", &n);

    while (i <= n)
    {
        result = add(i, result);
        i++;
    }

    printf("%d", result);
}
int add(int x, int y) {return x + y;}