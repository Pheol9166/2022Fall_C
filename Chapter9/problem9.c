#include <stdio.h>

/**
 * 포인터를 사용하여 문자 6개를 복사하는 함수를 만ㄷ르고 출력
 * strcopy 정의 및 사용
*/

void strcopy(char *a, char *b);

int main()
{
    char a[6] = {'\0'};
    char b[6] = {'\0'};

    for (char *c = b; c < b + 6; c++) scanf("%c", c);
    
    strcopy(a, b);
    
    for (char *c = a; c < a + 6; c++) printf("%c", *c);

    return 0;
}
void strcopy(char *a, char *b)
{
    for (char *pa = a, *pb = b; pa < a + 6; pa++, pb++) *pa = *pb;
}