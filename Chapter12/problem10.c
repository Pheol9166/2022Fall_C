#include <stdio.h>
#include <stdlib.h>

/**
 * 사용자로부터 -1을 입력받기 전까지 계속 정수를 입력받은 후 역순으로 출력하는 프로그램을 작성하시오.
 * 초기 배열의 크기는 5로 설정, 공간이 부족할 때마다 크기가 3 증가한 배열을 새로 할당하고 기존의 데이터를 새 배열에 복사
*/
void copy(int *dest, int *src, int size);

int main()
{
    int ans;
    int index = 0;
    int size = 5;
    int *arr = NULL, *temp = NULL;

    arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory Error!");
        return -1;
    }

    while (ans != -1)
    {
        scanf("%d", &ans);
        arr[index++] = ans;
        if (index == size)
        {
            size += 3;
            temp = malloc(size * sizeof(int));
            copy(temp, arr, size);
            free(arr);
            arr = temp;
        }
    }

    for (int i = index - 1; i >= 0; i--) printf("%d ", arr[i]);   

    free(arr);

    return 0;
}

void copy(int *dest, int *src, int size)
{
    for (int i = 0; i < size - 3; i++) dest[i] = src[i]; 
}