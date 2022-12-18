#include <stdio.h>
#include <string.h>

/**
 * N 줄의 공백 포함 문자열 읽어서 가장 작은 공백 포함 문자열 출력 최대 길이는 100
*/

int main()
{
    int n = 0;
    int min = 100;
    char str[100] = {'\0'};
    char result[100] = {'\0'};

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        if (strlen(str) < min)
        {
            min = strlen(str);
            strcpy(result, str);
        }
    }
    printf("%s", result);

    return 0;
}