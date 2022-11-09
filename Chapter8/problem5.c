#include <stdio.h>

/**
 * 양의 정수를 반복해서 입력 받아 예시와 같이 트리 모양을 출력하는 프로그램을 작성하시오.
*/
void print_triangle(int);
int main()
{
    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        print_triangle(n);
        scanf("%d", &n);
    }
}
void print_triangle(int n)
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");       
    }
}