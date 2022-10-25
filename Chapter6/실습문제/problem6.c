#include <stdio.h>

int main()
{
    int n;
    int c_cnt = 0, n_cnt = 0;
    int c_result = 0, n_result = 0;
    char c;

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c);

        if (c >= 'a' && c <= 'z')
        {
            c_cnt++;
            if (n_cnt >= n_result) n_result = n_cnt;
            n_cnt = 0;
            
        }
        else
        {
            n_cnt++;
            if (c_cnt >= c_result) c_result = c_cnt;
            c_cnt = 0;
        }
    }

    printf("%d\n%d", c_result, n_result);
}