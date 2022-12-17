#include <stdio.h>

/**
 * 다섯 명의 학생 이름과 점수를 입력받아 평균 이하 점수 학생 이름 출력
 * 이름은 최대 9개 영문자
*/

typedef struct Student
{
    char name[10];
    int score;
} student;

int main()
{
    student arr[5] = {{'\0', 0}};
    double mean = 0.0;

    for (int i = 0; i < 5; i++) 
    {
        scanf("%s %d", &arr[i].name, &arr[i].score);
        mean += arr[i].score;
    }
    mean /= 5.0;
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i].score <= mean) printf("%s\n", arr[i].name);
    }

    return 0;
}