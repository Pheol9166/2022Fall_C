#include <stdio.h>
#include <string.h>

/**
 * 공백 포함 문자열 하나와 공백 포함 x 문자열 하나를 입력 받아 str2가 str1에 몇 번 나타나는지 횟수 출력
 * 문자열 최대 크기는 100
 * 이미 횟수 계산에 사용된 문자는 다음 계산에 포함하지 않는다.
 * strlen만 사용 가능
*/
int strInclude(char *str1, char *str2);

int main()
{
    char str1[100] = {'\0'};
    char str2[100] = {'\0'};

    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';

    scanf("%s", str2);

    printf("%d", strInclude(str1, str2));

    return 0;
}

int strInclude(char *str1, char *str2)
{
    int cnt = 0;
    int result = 0;

    for (int i = 0; i <= strlen(str1) - strlen(str2); i++)
    {
        for (int j = 0; j < strlen(str2); j++) 
        {
            if (str1[i] == str2[j]) cnt++;
            i++;
        }
        if (cnt == strlen(str2)) 
        {
            result++;
            i -= 1;
        }
        else i -= strlen(str2);

        cnt = 0;
    }

    return result;
}