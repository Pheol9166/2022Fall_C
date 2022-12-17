#include <stdio.h>

/**
 * 10명의 학생 이름과 3회의 퀴즈 점수를 입력 받아 퀴즈 평균 점수가 최고점, 최저점인 학생의 이름과 평균 점수 출력, 하위 30%에 속하는 학생 이름 퀴즈 평균 점수 출력
 * read_data() : 학생 이름, 퀴즈 점수 구조체 배열 저장
 * 학생 이름은 공백없이 최대 9개 문자
 * cal_avg(): 각 학생의 퀴즈 점수 평균값
 * sort(): 평균값에 따라 학생들의 이름과 퀴즈점수들을 내림차순 정렬
 * print_score(): 최고 평균점, 최저 평균점, 하위 30%을 소수점 둘쨰자리까지 
 * 동점은 존재하지 않음
*/

typedef struct Student
{
    char name[10];
    int q1, q2, q3;
    double mean;
} student;

void read_data(student *arr);
void cal_avg(student *arr);
void sort(student *arr);
void print_score(student *arr);

int main()
{
    student arr[10];

    read_data(arr);
    cal_avg(arr);
    sort(arr);
    print_score(arr);

    return 0;
}

void read_data(student *arr)
{
    for (int i = 0; i < 10; i++) scanf("%s %d %d %d", &arr[i].name, &arr[i].q1, &arr[i].q2, &arr[i].q3);
}
void cal_avg(student *arr)
{
    for (int i = 0; i < 10; i++) arr[i].mean = (arr[i].q1 + arr[i].q2 + arr[i].q3) / 3.0;
}
void sort(student *arr)
{
    student temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i].mean < arr[j].mean)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void print_score(student *arr)
{
    printf("%s %.2f\n", arr[0].name, arr[0].mean);
    printf("%s %.2f\n", arr[9].name, arr[9].mean);
    printf("%s %.2f\n", arr[7].name, arr[7].mean);
    printf("%s %.2f\n", arr[8].name, arr[8].mean);
    printf("%s %.2f\n", arr[9].name, arr[9].mean);
}