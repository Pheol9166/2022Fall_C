#include <stdio.h>

/**
 * 문자 #을 포함한 임의 개수 문자 입력 받은 후, 첫번째 # 이전 문자들을 포인터를 사용하여 역순 출력
*/
int main()
{
    char ch[20] = {'\0'};
    int flag = 0;

    scanf("%s", ch);

    for (char *ptr = ch; ptr < ch + 20; ptr++)
    {
        if (*ptr == '#' && flag == 0)
        {
            for (char *p = ptr - 1; p >= ch; p--) printf("%c", *p);
            flag = 1;
        }
    }

    return 0;
}