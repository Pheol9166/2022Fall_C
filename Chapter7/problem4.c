#include <stdio.h>

/**
 * hangman 게임 프로그램을 작성하시오
 * 맨 처음 정답에 해당하는 문자 3개로 구성된 영단어를 입력한다
 * 정답을 맞히기 위하여 다음과 같이 시도한다. (정답을 맞히거나 5번이 경과하면 종료)
 * 문자를 한 줄에 하나씩
 * 문자를 입력할 때마다 현재 상태를 화면에 출력
*/

int main()
{
    char correct[3];
    char answer[3] = {'_', '_', '_'};
    char c;

    for (int i = 0; i < 3; i++) scanf("%c", &correct[i]);
    getchar();

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &c);
        if (c == correct[0]) answer[0] = c;
        if (c == correct[1]) answer[1] = c;
        if (c == correct[2]) answer[2] = c;

        printf("%c %c %c\n", answer[0], answer[1], answer[2]);

        if (answer[0] == correct[0] && answer[1] == correct[1] && answer[2] == correct[2]) break;

        getchar();
    }
}