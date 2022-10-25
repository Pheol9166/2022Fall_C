#include <stdio.h>

int main()
{
    int hour, min, sec;

    hour = 7283 / 3600;
    min = 7283 % 3600 / 60;
    sec = 7283 % 60;

    printf("%d %d %d\n", hour, min, sec);
}