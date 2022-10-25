#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d번째 영어 대문자는 %c", n, 'A' + n);
}