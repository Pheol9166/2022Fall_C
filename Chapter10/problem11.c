#include <stdio.h>
#include <string.h>

/**
 * 공백을 포함하지 않는 문자열 두 개를 입력받아 첫 번쨰 문자열의 길이 출력, str2가 str1에 포함되어 있는 문자열이면 1, 아니면 0 반환
 * str1 최대 길이는 80, str2 최대 길이는 10
 * strlen만 사용 가능, strstr 사용 불가
*/
int str_str(char *s1, char *s2);

int main()
{
    char str1[80];
    char str2[10];

    scanf("%s", str1);
    scanf("%s", str2);
    printf("%d %d", strlen(str1), str_str(str1, str2));

    return 0;
}   

int str_str(char *s1, char *s2)
{
    int cnt = 0;

    for (int i = 0; i <= strlen(s1) - strlen(s2); i++)
    {  

        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j]) cnt++;
            i++;  
        }
        if (cnt == strlen(s2)) return 1;
        cnt = 0;

        i -= strlen(s2);
    }

    return 0;
}