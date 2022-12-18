#include <stdio.h>
#include <stdlib.h>

/**
 * 2차원 문자 배열을 동적으로 할당, 알파벳 순서대로 배열에 채워서 출력
 * 알파벳은 소문자부터
*/

int main()
{
    int row, col; // row개의 1차원 배열들이 col개 있는 2차원 배열
    char l = 'a';
    char **arr = NULL;

    scanf("%d %d", &row, &col);
    arr = (char**)malloc(col * sizeof(char*));
    if (arr == NULL)
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < col; i++) 
    {
        arr[i] = (char*)malloc(row * sizeof(char));
        if (arr[i] == NULL)
        {
            printf("Memory Error!");
            return -1;
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%c ", l);
            l++;
            
            if (l == 'z' + 1) l = 'A';
            if (l == 'Z' + 1) l = 'a';
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++) free(arr[i]);
    free(arr);

    return 0;
}