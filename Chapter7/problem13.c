#include <stdio.h>

/**
 * MxM 크기의 행렬 A와 NxN 크기의 행렬 B의 정보를 입력받아 (1<= M <= N <= 20) 행렬 A가 나타나는 행렬 B의 시작 위치를 모두 찾는 프로그램
 * 행 번호가 작은 위치부터 출력 그런 위치가 없으면 none 출력
*/
int main()
{
    int n, m;
    int flag = 0;
    int A[20][20];
    int B[20][20];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++) scanf("%d", &A[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d", &B[i][j]);
    }
    
    for (int i = 0; i < n - m + 1; i++)
    {
        for (int j = 0; j < n - m + 1; j++)
        {
            if (B[i][j] == A[0][0])
            {
                flag = 1;
                for (int k = 0; k < m; k++)
                {
                    if ((B[i][j + k] != A[0][k]) || (B[i + k][j] != A[k][0]) || (B[i + k][j + k] != A[k][k])) flag = 0;
                }

                if (flag == 1) printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}