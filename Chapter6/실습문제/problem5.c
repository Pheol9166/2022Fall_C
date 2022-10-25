#include <stdio.h>

/**
 * 사용자에게서 N개의 정수를 입력받아 가장 큰 수와 두 번째로 큰 수를 차례로 출력하는 프로그램을 작성하시오.
*/

int main()
{
    int n;
    int answer;
    int first, second, temp;

    scanf("%d", &n);

    scanf("%d %d", &first, &second);
    if (first < second)
    {
        temp = first;
        first = second;
        second = first;
    }

    for (int i = 0; i < n - 2; i++)
    {
        scanf("%d", &answer);
        
        if (answer >= first)
        {
            second = first;
            first = answer;
        }
        else if (answer >= second)
        {
            second = answer;
        }
    }

    printf("%d\n%d", first, second);
}