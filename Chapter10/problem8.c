#include <stdio.h>
#include <string.h>

/**
 * 두 개의 공백을 포함하지 않는 문자열을 scanf로 입ㄹ력받고 사전식 순서 비교, 크기가 큰 문자열 뒤에 크기가 작은 문자열 오도록 만듬
 * 문자열 길이 최대 50
*/

int main()
{
    char str1[101] = {'\0'};
    char str2[101] = {'\0'};

    scanf("%s", str1);
    scanf("%s", str2);

    if (strcmp(str1, str2) > 0) printf("%s", strcat(str1, str2));
    else printf("%s", strcat(str2, str1));

    return 0;
}