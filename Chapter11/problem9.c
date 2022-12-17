#include <stdio.h>

/**
 * 한 학생의 시험 결과 정보 (최고점, 최저점, 통과 여부, 합격 기준 점수 차, 점수 차) 입력 받아 점수 차와 시험 통과 여부 출력
*/

typedef struct Result
{
    int max, min;
    char pass;
    int std;
    int gap;
} result;

void pass_or_fail(result *st);

int main()
{
    result stu;
    
    scanf("%d %d %d", &stu.max, &stu.min, &stu.std);
    pass_or_fail(&stu);

    printf("%d %c", stu.gap, stu.pass);

    return 0;
}

void pass_or_fail(result *st)
{
    st->gap = st->max - st->min;

    if (st->gap <= st->std) st->pass = 'P';
    else st->pass = 'F';
}
