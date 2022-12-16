#include <stdio.h>
#include <string.h>

/**
 * 공백을 포함하지 않는 문자열을 하나 입력 받아 한 칸씩 미루며 출력하는 프로그램
 * 문자열 길이는 최대 100
 * %c 사용 금지
*/

int main()
{
    int i = 0;
    char temp = '\0';
    char str[100] = {'\0'};

    scanf("%s", str);

    while (i < strlen(str))
    {
        printf("%s\n", str);
        
        temp = str[0];
        for (int j = 0; j < strlen(str) - 1; j++) str[j] = str[j + 1];
        str[strlen(str) - 1] = temp;

        i++;
    }

    return 0;
}