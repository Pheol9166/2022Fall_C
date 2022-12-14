#include <stdio.h>

int func2(int x, int a, int b, int c);
int main()
{
    int n;
    int a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", func2(n, a, b, c));

    return 0;
}
int func2(int x, int a, int b, int c) {return (a * x * x + b * x + c);}