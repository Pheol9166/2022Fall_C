#include <stdio.h>
#include <stdlib.h>

/**
 * N명의 학생에 대한 정보(이름, 국, 영, 수) 입력받아 평균 성적과 GREAT, BAD 출력
 * 어느 한 과목이라도 90 이상이면 GREAT 출력
 * 어느 한 과목이라도 70 미만이면 BAD 출력
 * 동적할당, 구조체 사용
 * 이름은 7이하의 공백 포함 x 문자열
*/

typedef struct Student
{
    char name[8];
    int kor, eng, math;
    double mean;
} student;

int main()
{
    int n;
    student *arr = NULL;

    scanf("%d", &n);

    arr = (student*)malloc(n * sizeof(student));
    if (arr == NULL)
    {
        printf("Memory Error!");
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", &arr[i].name, &arr[i].kor, &arr[i].eng, &arr[i].math);
        arr[i].mean = (arr[i].kor + arr[i].eng + arr[i].math) / 3.0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %.1f ", arr[i].name, arr[i].mean);
        
        if (arr[i].kor >= 90 || arr[i].eng >= 90 || arr[i].math >= 90) printf("GREAT ");
        if (arr[i].kor < 70 || arr[i].eng < 70 || arr[i].math < 70) printf("BAD ");
        printf("\n");
    }

    free(arr);

    return 0;
}