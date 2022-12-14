#include <stdio.h>

/**
 * NxN 크기의 행렬을 입력받아 주대각선에 위치한 원소만 전치시킨 행렬을 출력하는 프로그램을 작성하시오.
*/
int main()
{
    int n;
    int temp = 0, temp2 = 0;
    int arr[10][10] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
    }

    printf("\n");
    
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i][i];
        arr[i][i] = arr[n - i - 1][n - i - 1];
        arr[n - i - 1][n - i - 1] = temp;

        temp = arr[i][n - i - 1];
        arr[i][n - i - 1] = arr[n - i - 1][i];
        arr[n - i - 1][i] = temp;        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}