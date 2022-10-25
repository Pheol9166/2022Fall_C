#include <stdio.h>

/**
 * N(3<= N <= 100)개의 문자를 입력받아 연속된 문자로 cat이 나타나는 횟수를 구하는 프로그램을 작성
*/

int main()
{
    int n;
    int count = 0;
    char arr[100];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) scanf("%c", &arr[i]);

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] == 'c' && arr[i + 1] == 'a' && arr[i + 2] == 't') count++;
    }

    printf("%d", count);
}