#include <stdio.h>
#include <string.h>

/**
 * 사용자로부터 공백을 포함하지 않는 문자열을 하나 입력받아 회문 여부 판단하는 프로그램 작성
 * check 함수 정의
 * 최대 길이 30
*/

int check(char *s);

int main()
{
    char str[30] = {'\0'};

    scanf("%s", str);

    printf("%d %d", strlen(str), check(str));

    return 0;
}

int check(char *s)
{
    int f = 1;

    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1]) f = 0;       
    }

    return f;
}