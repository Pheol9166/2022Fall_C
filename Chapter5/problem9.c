#include <stdio.h>

/**
 * 두 날짜를 yyyy/mm/dd로 입력받아 둘 중 빠른 날짜를 출력하는 프로그램을 출력하시오
 * 두 날짜가 같은 경우에는 날짜 출력 후 뒤에 *을 출력한다
*/

int main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    int mode = 0;

    scanf("%d/%d/%d", &year1, &month1, &day1);
    scanf("%d/%d/%d", &year2, &month2, &day2);

    if (year1 < year2) mode = 1;
    else if (year1 > year2) mode = 2;
    else if (month1 < month2) mode = 1;
    else if (month1 > month2) mode = 2;
    else if (day1 < day2) mode = 1;
    else if (day1 > day2) mode = 2;
    else mode = 3;

    switch (mode)
    {
        case 1:
            printf("%04d/%02d/%02d", year1, month1, day1);
            break;
        case 2:
            printf("%04d/%02d/%02d", year2, month2, day2);
            break;
        default:
            printf("%04d/%02d/%02d*", year1, month1, day1);
    } 
}