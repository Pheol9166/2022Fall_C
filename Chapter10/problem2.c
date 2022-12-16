#include <stdio.h>
#include <stdlib.h>

/**
 * 임의의 정수를 입력으로 받아 한 자리씩 문자로 변환시켜 마지막 자릿수부터 차례로 문자 배열에 저장한 후 출력
 * %c 사용 금지, 최대 9자리
*/
int main()
{
    int n, temp;
    int i = 0;
    char str[10] = {'\0'};

    scanf("%d", &n);

    while (n)
    {
        str[i] = (char)(n % 10 + '0');
        n /= 10;
        i++;
    }
    printf("%s", str);

    return 0;
}