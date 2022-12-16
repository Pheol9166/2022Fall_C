#include <stdio.h>
#include <string.h>

/**
 * 문제 5에서 str2의 반전 여부를 입력 받은 후 정순 혹은 역순으로 문자열을 삽입하는 프로그램을 작성하시오.
*/
int main()
{
    char str1[41] = {'\0'};
    char str2[21] = {'\0'};
    char temp = '\0';
    int index = 0;
    int reverse = 0;

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%d", &index);
    scanf("%d", &reverse);

    if (reverse)
    {
        for (int i = 0; i < strlen(str2) / 2; i++)
        {
            temp = str2[i];
            str2[i] = str2[strlen(str2) - i - 1];
            str2[strlen(str2) - i - 1] = temp;
        }
    }
    for (int i = strlen(str1); i >= index; i--) str1[i + strlen(str2)] = str1[i];
    for (int i = index, j = 0; i < index + strlen(str2); i++, j++) str1[i] = str2[j];

    printf("%s", str1);

    return 0;
}