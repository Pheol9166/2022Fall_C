#include <stdio.h>
#include <stdlib.h>

/**
 * 학번 관리 프로그램
 * N개만큼 학번을 입력받음, D를 입력받고 뒤에서부터 삭제 (메모리 크기 조정해야함)
*/

int main()
{
    int n, d;
    int *arr =  NULL;

    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d", &d);

    realloc(arr, (n - d) * sizeof(int));
    
    for (int i = 0; i < n - d; i++) printf("%d\n", arr[i]);

    free(arr);

    return 0;
}