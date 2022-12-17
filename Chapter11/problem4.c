#include <stdio.h>

/**
 * N 명의 학생에 대해 이름과 세 번의 시험 점수를 읽어 각 학생의 이름과 평균 점수를 출력하는 프로그램
 * N은 20이 넘지 않고 이름은 19개 이하 영문자
*/

typedef struct Student
{
    char name[20];
    int t1, t2, t3;
} student;

int main()
{
    int n;
    double mean = 0.0;
    student arr[20];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%s %d %d %d", &arr[i].name, &arr[i].t1, &arr[i].t2, &arr[i].t3);
        
        mean = (arr[i].t1 + arr[i].t2 + arr[i].t3) / 3.0;
        printf("%s %.1f ", arr[i].name, mean);
        
        if (mean >= 90) printf("A\n");
        else if (mean >= 80) printf("B\n");
        else if (mean >= 70) printf("C\n");
        else printf("F\n");
    }

    return 0;
}