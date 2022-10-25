#include <stdio.h>

/**
 * 만약 problem7에서 m이 질문 횟수라면?
*/
int main()
{
    int n, m, answer;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &answer);
        if (answer > n) printf("DOWN\n");
        else if (answer < n) printf("UP\n");
        else
        {
            printf("RIGHT");
            break;
        }
    }
}