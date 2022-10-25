#include <stdio.h>

/**
 * 다음과 같이 동작하는 UP DOWN 숫자 맞추기 게임 프로그램 작성
 * 첫 줄에 게임의 정답을 나타내는 정수 N 입력
 * 두 번째 줄에 정답을 추측한 수 M 입력
 * 추측 맞으면 RIGHT 출력 후 프로그램 종료
 * 정답보다 작으면 UP 정답보다 크면 DOWN 출력
 * 맞을 때까지 반복
*/

int main()
{
    int n, m;

    scanf("%d", &n);

    do
    {
        scanf("%d", &m);

        if (m > n) printf("DOWN\n");
        else if (m < n) printf("UP\n");
        else printf("RIGHT"); 
    } while (m != n);
    
}