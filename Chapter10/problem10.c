#include <stdio.h>
#include <string.h>

/**
 * N 줄의 공백 포함 문자열 읽어서 가장 작은 공백 포함 문자열 출력 최대 길이는 100
*/

int main()
{
    int n;
    int max;
    char arr[100] = {'\0'};
    char result[100] = {'\0'};

    scanf("%d", &n);
    getchar();

    fgets(arr, sizeof(arr), stdin);
    arr[strlen(arr) - 1] = '\0';
    max = strlen(arr);

    for (int i = 0; i < n - 1; i++)
    {
        fgets(arr, sizeof(arr), stdin);
        arr[strlen(arr) - 1] = '\0';

        if (strlen(arr) < max)
        {
            max = strlen(arr);
            strcpy(result, arr);
        }
    }    
    printf("%s", result);

    return 0;
}