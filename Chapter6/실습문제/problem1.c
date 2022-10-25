#include <stdio.h>

/**
 * 양의 정수 n 입력, 약수를 오름차순으로 출력하는 프로그램
*/

int main()
{
    int n;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) printf("%d ", i);
    }
}