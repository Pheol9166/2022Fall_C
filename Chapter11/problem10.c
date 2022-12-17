#include <stdio.h>

/**
 * year/month/day 형식으로 두 날짜를 입력 ㅂ다아 더 빠른 날짜를 같은 형식으로 출력하는 프로그램 작성
 * select_min 함수 사용
*/

typedef struct Date
{
    int year, month, day;
} date;

date* select_min(date *d1, date *d2);

int main()
{
    date date1, date2;
    date *result = NULL;

    scanf("%d/%d/%d", &date1.year, &date1.month, &date1.day);
    scanf("%d/%d/%d", &date2.year, &date2.month, &date2.day);

    result = select_min(&date1, &date2);
    printf("%d/%d/%d", result->year, result->month, result->day);

    return 0;
}

date* select_min(date *d1, date *d2)
{
    int f = 0;

    if (d1->year > d2->year) f = 2;
    else if (d1->year < d2->year) f = 1;
    else if (d1->month > d2->month) f = 2;
    else if (d1->month < d2->month) f = 1;
    else if (d1->day > d2-> day) f = 2;
    else if (d1->day < d2->day) f = 1;
    else f = 3;

    if (f == 1) return d1;
    else if (f == 2) return d2;
    else return d1;
}