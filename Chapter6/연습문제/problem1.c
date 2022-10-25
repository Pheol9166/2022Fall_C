#include <stdio.h>

/**
 * 사용자에게 정수를 입력 받아 그 정수에 해당하는 구구단을 출력해보자. 
*/
int main()
{
    int num;
    int i = 1;

    scanf("%d", &num);

    while (i < 10)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
}