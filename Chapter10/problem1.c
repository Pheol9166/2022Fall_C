#include <stdio.h>
#include <string.h>

/**
 * 사용자로부터 공백을 포함하지 않는 문자열을 입력받은 후 소문자만 출력하는 프로그램 작성
 * 최대 20
*/

int main()
{
    char str[20] = {'\0'};

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < 20; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') printf("%c", str[i]);
    }

    return 0;
}