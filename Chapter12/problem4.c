#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 사용자로부터 문자열 한 개와 문자 두 개를 입력받아 각 문자가 문자열에 몇 번 포함되어있는지 출력하는 프로그램 작성
*/

int main()
{
    int size;
    int cnt1 = 0, cnt2 = 0;
    char c1, c2;
    char *str = NULL;
    
    scanf("%d", &size);
    
    str = (char*)malloc((size + 1) * sizeof(char));
    if (str == NULL)
    {
        printf("Memory Error");
        return -1;
    }

    scanf("%s", str);
    getchar();

    scanf("%c %c", &c1, &c2);

    for (int i = 0; i < size; i++)
    {
        if (str[i] == c1) cnt1++;
        if (str[i] == c2) cnt2++;
    }
    printf("%d %d", cnt1 ,cnt2);

    free(str);

    return 0;
}