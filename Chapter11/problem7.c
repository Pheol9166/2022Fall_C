#include <stdio.h>

/**
 * 10개의 정수를 입력 받고 내림차순 상 순위 계산, 3번째와 7번째에 해당하는 정수 출력
 * 정수와 순위를 구조체 배열에 저장하되, 정수 순서대로 배열에 저장
 * 배열 저장 순서를 정렬 순서로 바꾸면 안됨
 * 중복 입력은 존재하지 않음
*/

typedef struct Num
{
    int n;
    int rank;
} num;

int main()
{
    int cnt = 0;
    num arr[10];

    for (int i = 0; i < 10; i++) scanf("%d", &arr[i].n);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i].n < arr[j].n) cnt++;
        } 
        arr[i].rank = cnt + 1;
        cnt = 0;

        if (arr[i].rank == 3) printf("%d ", arr[i].n);
        if (arr[i].rank == 7) printf("%d ", arr[i].n);
    }

    return 0;
}

