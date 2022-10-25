#include <stdio.h>
/**
 * 양의 정수 초를 받아서 시분초 형태로 출력
*/
int main()
{
    int time;

    scanf("%d", &time);

    printf("%d:%d:%d", time / 3600, time % 3600 / 60, time % 60);

    return 0; 
}