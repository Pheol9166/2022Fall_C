#include <stdio.h>

/**
 * 배열 두 개 안 쓰고 해결 ->> 대단함
*/
int main()
{
    int x[10] = {0};
    int i = 0, j = 0, number = 0;
    int found = 0;
    int cnt = 0;

    for (i = 0; i < 10; i++) scanf("%d", &x[i]);

    for (i = 0; i < 10; i++)
    {
        number = x[i];

        found = 0;
        for (j = 0; j < i; j++)
        {
            if (number == x[j])
            {
                found = 1;
                break;
            }
        }
        
        if (found == 0)
        {
            cnt = 0;
            for (j = i; j < 10; j++)
            {
                if (number == x[j]) cnt++;
            }

            printf("%d %d\n", number, cnt);
        }
    }
}