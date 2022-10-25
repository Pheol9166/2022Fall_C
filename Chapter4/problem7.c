#include <stdio.h>

int main()
{
    int hour1, min1, sec1;
    int hour2, min2, sec2;
    int time1, time2, result;

    scanf("%d %d %d", &hour1, &min1, &sec1);
    scanf("%d %d %d", &hour2, &min2, &sec2);

    time1 = hour1 * 3600 + min1 * 60 + sec1;
    time2 = hour2 * 3600 + min2 * 60 + sec2;
    result = time2 - time1;

    printf("%d %d %d", result / 3600, result % 3600 / 60, result % 60);
}