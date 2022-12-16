#include <stdio.h>

/**
 * 공백 포함하지 않는 문자열 2개 받아서 일치 검사
 * strlen, strcmp 사용 금지
 * 길이 최대 100
 * 첫번째 문자열 길이 출력, 일치 여부 출력
*/
int strlen(char *str);
int strcmp(char *str1, char *str2);

int main()
{
    char str1[100] = {'\0'};
    char str2[100] = {'\0'};

    scanf("%s", str1);
    scanf("%s", str2);

    printf("%d %d", strlen(str1), strcmp(str1, str2));

    return 0;
}

int strlen(char *str)
{
    int cnt = 0;

    while (*str) 
    {
        cnt++;
        str++;
    }    
    return cnt;
}
int strcmp(char *str1, char *str2)
{
    if (strlen(str1) != strlen(str2)) return 0;
    else
    {
        while (*str1)
        {
            if (*str1 != *str2) return 0;
            str1++;
            str2++;
        }
        return 1;
    } 
}