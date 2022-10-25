#include <stdio.h>

/**
 * 연도를 나타내는 양의 정수 N을 입력 받아 윤년인지 평년인지 출력하는 프로그램을 작성
*/

int main()
{
    int n;
    int check = 0;

    scanf("%d", &n);

    if (!(n % 4))
    {
        check = 1;
        if (!(n % 100))
        {
            check = 0;
            if (!(n % 400)) check = 1;
        }
    }

    if (check == 1) printf("leap year");
    else printf("common year");
}

/* 다중 if문 쓰지 않는 버전
int main()
{
    int n;
    int check = 0;

    scanf("%d", &n);
    
    if (n % 400 == 0) printf("leap year");
    else if (n % 100 == 0) printf("common year");
    else if (n % 4 == 0) printf("leap year");
    else printf("common year");
}
*/