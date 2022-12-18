#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * N 개의 문자열을 입력받아 길이 기준으로 역순으로 정렬하는 프로그램 작성
*/

int main()
{
    int n;
    char str[100] = {'\0'};
    char *temp = NULL;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(arr[i]) < strlen(arr[j]))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);

    for (int i = 0; i < n; i++) free(arr[i]);
    free(arr);

    return 0;
}