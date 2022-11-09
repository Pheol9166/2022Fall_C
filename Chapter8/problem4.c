#include <stdio.h>

/**
 * 2 ~ 9 사이의 정수 N을 입력 받아 숫자 N으로 사각형을 출력하는 프로그램 작성
*/
void print_row1(int);
void print_row2(int);
int main()
{
    int n = 0;
    scanf("%d", &n);

    print_row1(n);
    for (int i = 0; i < n- 2; i++) print_row2(n);
    print_row1(n);

    return 0;
}

void print_row1(int n)
{
    for (int i = 0; i < n; i++) printf("%d", n);
    printf("\n");
}
void print_row2(int n)
{
    printf("%d", n);
    for (int i = 0; i < n - 2; i++) printf(" ");
    printf("%d", n);
    printf("\n");
}