#include <stdio.h>
#include <stdlib.h>

/**
 * N개의 정수를 입력받아 역순 출력
*/

int main()
{
    int n;
    int *arr = NULL;

    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Error!");
        return -1;
    }

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);

    free(arr);

    return 0;
}
