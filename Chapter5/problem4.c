#include <stdio.h>

/**
 * 문자 한개 입력, 대문자 -> 소문자, 소문자 -> 대문자 
 * 영단어 아니면 none 출력
*/
int main()
{
    char c;

    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        printf("%c", c += 'A' - 'a');
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c", c -= 'A' - 'a');
    }
    else 
    {
        printf("none");
    }
}