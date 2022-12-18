#include <stdio.h>
#include <stdlib.h>

/**
 * n개의 실수를 입력 받고 각 값과 최솟값과의 차이를 출력
*/

int main()
{
    int n;
    double min;
    double *arr = NULL;

    scanf("%d", &n);

    arr = (double*)malloc(n * sizeof(double));
    if (arr == NULL) 
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < n; i++) scanf("%lf", &arr[i]);
    
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i]) min = arr[i];
    }

    for (int i = 0; i < n; i++) printf("%.2f ", arr[i] - min);

    free(arr);

    return 0;
}