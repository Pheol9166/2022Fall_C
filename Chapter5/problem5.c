#include <stdio.h>

/**
 * 양의 정수 하나를 입력 받아 2, 3, 5 중 어떤 수에 의해 나누어떨어지는 지에 따라 해당 알파벳을 출력한다
 * 모두 -> A
 * 2, 3 -> B
 * 2 ,5 -> C
 * 3, 5 -> D
 * 2, 3, 5 중 어느 하나만 -> E
 * 모두 아니면 -> N
*/

int main()
{
    int n;
    char f;

    scanf("%d", &n);

    if (!(n % 2) && !(n % 3) && !(n % 5)) f = 'A';
    else if (!(n % 2) && !(n % 3) && (n % 5)) f = 'B';
    else if (!(n % 2) && !(n % 5) && (n % 3)) f = 'C';
    else if (!(n % 3) && !(n % 5) && (n % 2)) f = 'D';
    else if ((n % 2) && (n % 3) && (n % 5)) f = 'N';
    else f = 'E';
    
    printf("%c", f);
}