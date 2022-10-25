#include <stdio.h>

/**
 * 0 ~ 6 사이 정수를 입력 받아 그 정수에 해당하는 요일에서 1일이 시작하는 달력을 출력하는 프로그램
*/

int main()
{
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) printf("   ");
    
    for (int i = 1; i <= 31; i++)
    {
        printf("%3d", i);
        if ((n + i) % 7 == 0) printf("\n");
    }
}