#include <stdio.h>

/**
 * UPDown 숫자 맞추기 게임
 * 첫 줄에 게임의 정답 n 입력 ( 1 <= n <= 6)
 * 두 번째 줄에 정답 추측 수 m
 * 맞으면 RIGHT 출력 후 프로그램 종료
 * 정답보다 작으면 UP 크면 DOWN
 * 이 과정을 두번 반복
 * 
 * 5 <- n
 * 4 <- m
 * 3 <- m
*/
int main()
{
    int n, m;
    
    scanf("%d", &n);
    
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &m);

        if (m > n) printf("DOWN\n");
        else if (m < n) printf("UP\n"); 
        else
        {
            printf("RIGHT");
            break;
        }
    }
}