#include <stdio.h>

/**
 * 3명의 국어와 영어 성적을 입력받아, 각 학생마다 과목별 평균보다 낮은 점수를 출력하는 프로그램을 작성하시오.
*/
int main()
{
    int std[3][2] = {0};
    double kor = 0.0, eng = 0.0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++) scanf("%d", &std[i][j]);
        kor += std[i][0];
        eng += std[i][1];
    }
    kor /= 3.0;
    eng /= 3.0;

    for (int i = 0; i < 3; i++)
    {
        if (std[i][0] < kor) printf("%d ", std[i][0]);
        if (std[i][1] < eng) printf("%d", std[i][1]);
        printf("\n");
    }

    return 0;
}