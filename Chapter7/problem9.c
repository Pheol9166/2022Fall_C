#include <stdio.h>

/**
 * 5개 정수 입력 받아서 문제 8의 작업을 4번 반복하는 프로그램 작성 
*/
int main()
{
    int arr[5];
    int temp = 0;

    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        for (int k = 0; k < 5; k++) printf("%d ", arr[k]);
        printf("\n");
    }

    return 0;
}