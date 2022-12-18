#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 공백을 포함하는 문자열 N개를 입력 받아 이 중 길이가 가장 짧은 문자열을 출력하는 프로그램을 작성하시오.
 * 각 문자열의 길이는 최대 100
*/

int main()
{
    int n;
    int index = 0;
    char str[100] = {'\0'};
    char **arr = NULL;
    
    scanf("%d", &n);
    getchar();

    arr = (char**)malloc(n * sizeof(char*));
    if (arr == NULL)
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < n; i++)
    {   
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        arr[i] = (char*)malloc((strlen(str) + 1) * sizeof(char));
        if (arr[i] == NULL)
        {
            printf("Memory Error!");
            return -1;
        }
        
        strcpy(arr[i], str);
    }

    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[index]) > strlen(arr[i])) index = i;
    }
    printf("%s", arr[index]);

    for (int i = 0; i < n; i++) free(arr[i]);
    free(arr);

    return 0;
}