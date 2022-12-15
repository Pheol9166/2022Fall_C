#include <stdio.h>

/**
 * 두 정수를 입력 받아 최대 공약수와 최소 공배수를 포인터로 전달
 * gcdicm : 최대 공약수, 최소 공배수 구하는 함수
 *  - 1과 입력된 정수도 최대공약수 될 수 있음
*/

void gcdlcm(int *a, int *b, int *pgcd, int *plcm);

int main()
{
    int x, y;
    int gcd = 0, lcm = 0;
    
    scanf("%d %d", &x, &y);
    gcdlcm(&x, &y, &gcd, &lcm);
    printf("%d %d", gcd, lcm);

    return 0;
}
void gcdlcm(int *a, int *b, int *pgcd, int *plcm)
{
    int small, lcm;
    int f = 0;

    if (*a > *b) small = *b;
    else small = *a;

    for (int i = 1; i <= small; i++) 
    {
        if (!(*b % i) && !(*a % i)) *pgcd = i;
    }

    lcm = *a * *b / *pgcd;
    *plcm = lcm;
}