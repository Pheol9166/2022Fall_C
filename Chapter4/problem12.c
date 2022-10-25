#include <stdio.h>

/**
 * 문자 1개 입력 받고 입력 받은 문자가 알파벳인지 아닌지 판단하는 프로그램 작성
*/
int main()
{
    char c;
    int result;

    scanf("%c", &c);
    
    result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0;
    printf("%d", result);
}