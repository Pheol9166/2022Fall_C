#include <stdio.h>


/**
 * 사용자로부터 정수 N을 입력받아 그 값을 표현하는 문자열 출력
 * 10000보다 작은 정수 입력
*/

int main()
{
    int n;
    char *nums[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if (n / 1000) printf("%s THO ", nums[n / 1000 - 1]);
    if (n / 100) printf("%s HUN ", nums[(n % 1000) / 100 - 1]);
    if (n / 10) printf("%s TEN ", nums[(n % 100) / 10 - 1]);
    if (n % 10) printf("%s ", nums[n % 10 - 1]);

    return 0;
}