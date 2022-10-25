#include <stdio.h>

/**
 * 야구 게임
 * 정답을 나타내는 0 ~ 9 사이의 서로 다른 정수 3개를 입력 받는다
 * 정답을 추측한 0 ~ 9 사이의 서로 다른 정수 3개를 입력 받는다
 * 스트라이크 개수와 볼의 개수를 출력한다.
 * - 스트라이크 개수: 값도 맞추고 위치도 맞춘 숫자의 개수
 * - 볼 개수: 값은 맞췄지만 위치는 틀린 숫자의 개수
*/
int main()
{
    int a, b, c;
    int ans_a, ans_b, ans_c;
    int s_count = 0;
    int b_count = 0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &ans_a, &ans_b, &ans_c);

    if (ans_a == a) s_count++;
    if (ans_b == b) s_count++;
    if (ans_c == c) s_count++;
    if (ans_a == b || ans_a == c) b_count++;
    if (ans_b == a || ans_b == c) b_count++;
    if (ans_c == a || ans_c == b) b_count++;

    printf("%dS%dB", s_count, b_count); 
}