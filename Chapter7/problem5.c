#include <stdio.h>

/**
 * 중복된 숫자가 입력되기 전까지 양의 정수를 반복해서 입력 받고, 입력된 모든 정수의 합을 출력하는 코드 작성
 * 양의 정수만 입력되며, 입력값의 최대 개수는 100
*/

int main()
{
    int arr[100];
    int i = 0, check = 0;
    int sum = 0;

    while (1)
    {
        scanf("%d", &arr[i]);

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i]) check = 1;
        }
        
        if (check) break;

        sum += arr[i];
        i++;
    }

    printf("%d", sum);
}