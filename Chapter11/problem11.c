#include <stdio.h>

/**
 * 5명의 학생 이름과 점수를 입력받아 점수가 최하위인 학생의 이름과 점수 출력
 * 학생 이름은 최대 길이가 9인 문자열
 * 같은 점수의 학생은 없다 가정
 *  select_min() 함수를 만들어 프로그램 작성
*/

typedef struct Student
{
    char name[10];
    int score;
} student;

student* select_min(student *arr);

int main()
{
    student arr[5] = {{'\0', 0}};
    student *m = NULL;

    for (int i = 0; i < 5; i++) scanf("%s %d", &arr[i].name, &arr[i].score);
    
    m = select_min(arr);
    printf("%s %d", m->name, m->score);

    return 0;
}

student* select_min(student *arr)
{
    int min = 100;
    student *min_st = NULL;

    for (student *ptr = arr; ptr < arr + 5; ptr++)
    {
        if (ptr->score < min) 
        {
            min = ptr->score;
            min_st = ptr;
        }
    }

    return min_st;
}