#include <stdio.h>

/**
 * 영어 소문자 순서대로 출력
*/

int main()
{
    char ch = 'a';

    while (ch <= 'z')
    {
        printf("%c\n", ch);
        ch++;
    }
}