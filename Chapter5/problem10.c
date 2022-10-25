#include <stdio.h>

/**
 * 국 영 수 점수를 입력 받아 학점과 같이 메시지 출력하는 프로그램
 * 3과목 평균 실수
 * 91.5 이상이면 A 출력
 * 91.5 > >= 85.5 -> B
 * 85.5 > >= 80.5 -> C
 * 그 미만이면 F
 * 3과목 중 한 개라도 100점인 과목이 있으면 Good 출력 60점 미만이 한 개라도 있으면 Bad 출력 
*/

int main()
{
    int korean, math, english;
    double mean;

    scanf("%d %d %d", &korean, &math, &english);

    mean = (korean + math + english) / 3.0;

    if (mean >= 91.5) printf("A");
    else if (mean >= 85.5) printf("B");
    else if (mean >= 80.5) printf("C");
    else printf("F");

    if (korean == 100 || math == 100 || english == 100) printf("Good");
    if (korean < 60 || math < 60 || english < 60) printf("Bad");
}