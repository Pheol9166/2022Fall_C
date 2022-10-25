#include <stdio.h>

/**
 * 0 ~ 100 정수를 반복해서 입력받아 입력된 정수들의 합, 평균, 개수를 출력하는 프로그램을 작성하시오.
 * 100이 넘는 수는 계산에서 제외
 * 실수는 소수점 이하 둘째 자리까지만 출력
*/

int main()
{
    int n;
    int sum = 0, cnt = 0;
    double mean;

    while (1)
    {
        scanf("%d", &n);
        if (n > 100) continue;
        else if (n < 0) break;
        else
        {
            sum += n;
            cnt++;
        }   
    }

    printf("%d %.2f %d", sum, (double)sum / cnt, cnt);
}