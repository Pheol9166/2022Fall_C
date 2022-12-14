#include <stdio.h>

/**
 * 합성함수
*/
int f(int x, int a, int b, int c);
int main()
{
    int n, temp;
    int a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    temp = f(n, a, b, c);

    scanf("%d %d %d", &a, &b, &c);
    printf("%d", f(temp, a, b, c));   

    return 0;   
}
int f(int x, int a, int b, int c) {return (a * x * x + b * x + c);}