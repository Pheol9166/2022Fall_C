#include <stdio.h>
#include <stdlib.h>

/**
 * MxN 크기의  행렬과 내부 행렬의 좌표 (m1, n1)과 (m2, n2)를 입력받고 예시와 같이 두 좌표 사이의 원소들을 역순으로 교환하여 출력
*/

int main()
{
    int m, n;
    int m1 = 0, n1 = 0, m2 = 0, n2 = 0;
    int r_size = 0, c_size = 0;
    int row = 0, col = 0;
    int temp = 0, row_pos = 0, col_pos = 0;
    int arr[20][20];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d ", &arr[i][j]);
    }

    scanf("%d %d", &m1, &n1);    
    scanf("%d %d", &m2, &n2);

    r_size = abs(m1 - m2);
    c_size = abs(n1 - n2);

    if (m1 > m2) row = m2;
    else row = m1;
    
    if (n1 > n2) col = n2;
    else col = n1;
     
    for (int i = row; i <= row + r_size; i++)
    {
        for (int j = col; j <= (col + c_size) / 2; j++)
        {
            col_pos = col * 2 + c_size - j;

            temp = arr[i][j];
            arr[i][j] = arr[i][col_pos];
            arr[i][col_pos] = temp;
        }
    }
    for (int i = row; i <= (row + r_size) / 2; i++)
    {
        for (int j = col; j <= col + c_size; j++)
        {
            row_pos = row * 2 + r_size - i;

            temp = arr[i][j];
            arr[i][j] = arr[row_pos][j];
            arr[row_pos][j] = temp;
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}