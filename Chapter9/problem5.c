#include <stdio.h>

/**
 * 정수 3개를 입력, 화면에 출력
 * input() 함수 정의 -> 세 개의 int 포인터
 * output() 함수 정의 -> 세 개의 int 포인터
*/
void input(int *a, int *b, int *c);
void output(int *a, int *b, int *c);
int main()
{
    int x, y, z;

    input(&x, &y, &z);
    output(&x, &y, &z);

    return 0;
}

void input(int *a, int *b, int *c) {scanf("%d %d %d", a, b, c);}
void output(int *a, int *b, int *c) {printf("%d %d %d", *a, *b, *c);}