#include <stdio.h>

/**
 * 문자 다섯 개를 입력 받아서 예시와 같이 한 번에 한 칸씩 오른쪽으로 shift해서 출력하는 프로그램을 작성
*/

int main()
{
    char arr[5];
    char temp;

    for (int i = 0; i < 5; i++) scanf("%c", &arr[i]);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) printf("%c", arr[j]);
        printf("\n");
        
        temp = arr[4];
        for (int j = 4; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}