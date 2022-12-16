#include <stdio.h>
#include <string.h>

/**
 * 공백 포함 x 영문 문자열 str1, str2와 삽입 위치 입력
 * str1의 해당 위치에 str2 삽입
 * 최대 20
 * 삽입 위치는 항상 str1보돠 작거나 같다
*/

int main()
{
    char str1[41] = {'\0'};
    char str2[21] = {'\0'};
    int index = 0;

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%d", &index);

    for (int i = strlen(str1); i >= index; i--) str1[i + strlen(str2)] = str1[i];
    for (int i = index, j = 0; i < index + strlen(str2); i++, j++) str1[i] = str2[j];

    printf("%s", str1);

    return 0;
}