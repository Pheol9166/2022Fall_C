#include <stdio.h>

/**
 * N(2<= N <= 100)개의 정수를 입력 받아, 이 중에서 서로 다른 두 개의 수를 선택해서 더했을 때 합이 M이 되는 경우의 수를 출력하는 프로그램 작성
*/

int main()
{
    int n, m;
    int count = 0;
    int arr[100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == m) count++;
        }
    }

    printf("%d", count);
}