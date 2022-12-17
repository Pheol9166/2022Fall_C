#include <stdio.h>

/**
 * N명의 학생에 대한 정보(이름, 국 영 수) 입력받아 평균 성적에 대한 학점 
 * 구조체 안에는 이름, 국 영 수, 평균, 학점 등의 속성 필요
 * 구조체 포인터 이용
*/

typedef struct Student
{
    char name[9];
    int kor, eng, math;
    double mean;
    char grade;
} student;

int main()
{
    int n;
    student arr[50];

    scanf("%d", &n);

    for (student *st = arr; st < arr + n; st++) 
    {
        scanf("%s %d %d %d", &st->name, &st->kor, &st->eng, &st->math);
        st->mean = (st->kor + st->eng + st->math) / 3.0;

        if (st->mean >= 90) st->grade = 'A';
        else if (st->mean >= 80) st->grade = 'B';
        else if (st->mean >= 70) st->grade = 'C';
        else st->grade = 'F';
    }

    for (student *st = arr; st < arr + n; st++) printf("%s %.1f %c\n", st->name, st->mean, st->grade);

    return 0;
}