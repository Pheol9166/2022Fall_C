#include <stdio.h>

/**
 * 두 개의 시각을 입력 받아서 두 시각 사이의 차이를 계싼하여 출력하는 프로그램
 * 두 번째 시각이 첫 번째 시각보다 항상 늦은 시각
*/

typedef struct Time
{
    int hour;
    int min;
    int sec;
} time;

int main()
{
    time t1, t2, t3;

    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    if (t2.sec < t1.sec)
    {
        t3.sec = t2.sec + 60 - t1.sec;
        t2.min--;
    }
    else t3.sec = t2.sec - t1.sec;

    if (t2.min < t1.min) 
    {
        t3.min = t2.min + 60 - t1.min;
        t2.hour--;
    }
    else t3.min = t2.min - t1.min;

    t3.hour = t2.hour - t1.hour;

    printf("%d %d %d", t3.hour, t3.min, t3.sec);

    return 0;
}