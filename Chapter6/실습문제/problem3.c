#include <stdio.h>

/**
 * 양의 정수 x 입력, 역순으로 바꾼 정수로 변환하여 출력하는 프로그램 작성
 * 앞자리 0은 출력하지 않음
*/

int main()
{
    int n;
    int result = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        result *= 10;
        result += n % 10;
        n /= 10;
    }
    
    printf("%d", result);
}