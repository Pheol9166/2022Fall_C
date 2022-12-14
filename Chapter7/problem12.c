#include <stdio.h>

/**
 * 2차원 배열을 이용하여 오른쪽 표의 정보를 저장하고, 사용자로부터 0 ~ 5 사이의 숫자 세 개를 입력받아 각 숫자에 해당하는 영어를 출력하시오.
 * 0: ZERO-
 * 1: ONE--
 * 2: TWO--
 * 3: THREE
 * 4: FOUR-
 * 5: FIVE- 
*/

int main()
{
    char arr[6][6] = {"ZERO-", "ONE--", "TWO--", "THREE", "FOUR-", "FIVE-"};
    int answer;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &answer);
        printf("%s\n", arr[answer]);
    }

    return 0;
}