#include <stdio.h>

/**
 * 정수를 반복해서 입력 받아 가장 큰 값과 두 번째로 큰 값을 출력하는 프로그램 작성
*/
int max1, max2;

void swap(int *a, int *b);
void update_max(int x);
int main()
{
    int x;

    scanf("%d %d", &max1, &max2);
    if (max2 > max1) swap(&max1, &max2);
    
    while (x != 0)
    {
        scanf("%d", &x);
        update_max(x);
    }

    printf("%d %d", max1, max2);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void update_max(int x)
{
    int temp = 0;
        
    if (x > max1)
    {
        temp = max1;
        max1 = x;
        max2 = temp;
    }
    else if (x > max2) max2 = x;
    else return; // else로 끝내야 클린코드 같은데 else return 말고 생각나는게 없음.
}