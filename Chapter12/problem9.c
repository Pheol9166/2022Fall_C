#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 영어 소문자로 구성된 N 개 문자열을 입력받아 사전 순으로 출력하는 프로그램을 작성하시오.
 * 각 문자열 길이는 최대 100
*/

int main()
{
    int n;
    char str[100] = {'\0'};
    char *temp = NULL;
    char **arr = NULL;

    scanf("%d", &n);

    arr = (char**)malloc(n * sizeof(char*));
    if (arr == NULL)
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        
        arr[i] = (char*)malloc((strlen(str) + 1) * sizeof(char));
        if (arr[i] == NULL)
        {
            printf("Memory Error!");
            return -1;
        }

        strcpy(arr[i], str);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }
    free(arr);

    return 0;
}