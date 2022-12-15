#include <stdio.h>

/**
 * 10개의 영문자 입력, 가장 빈도수 높은 문자, 빈도수 출력
*/

int main()
{
    char word[10];
    char *letter = NULL;
    int cnt = 0, max = 0;

    for (char *c = word; c < word + 10; c++) scanf("%c", c);

    for (char *c = word; c < word + 10; c++)
    {
        for (char *c2 = c; c2 < word + 10; c2++)
        {
            if (*c == *c2) cnt++;
        }
        if (cnt > max)
        {
            max = cnt;
            letter = c;
        }
        cnt = 0;
    }
    printf("%c %d", *letter, max);
}