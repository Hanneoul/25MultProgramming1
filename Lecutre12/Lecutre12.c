#include <stdio.h>
#include <windows.h>
#include <time.h>

// 1초짜리 공격 애니메이션 (10프레임)
void attackAnimation() {
    char leftChar = '>';
    char rightChar = 'W';
    int attackDistance = 10; // 공격 거리
    int attackPosition = 0;  // 공격자의 위치
    int frames = 10;         // 총 10프레임

    // 10프레임 동안 애니메이션 실행
    for (int i = 0; i < frames; i++) {
        // 커서를 화면의 좌측 상단으로 이동
        printf("\033[H");

        // 왼쪽 캐릭터, 오른쪽 캐릭터, 공격자 표시
        for (int j = 0; j < attackPosition; j++) {
            printf(" "); // 공격자의 위치까지 빈칸을 출력
        }

        // 공격하는 캐릭터 출력
        printf("%c", leftChar);

        // 공격 거리만큼 오른쪽으로 이동한 캐릭터
        for (int j = attackPosition; j < attackDistance; j++) {
            printf(" "); // 공격자의 이동을 위한 빈칸
        }

        // 공격을 받는 캐릭터 출력
        printf("%c", rightChar);

        // 출력 후 프레임 대기
        Sleep(100); // 100ms 대기 
        // 공격자의 위치를 한 칸씩 증가시켜 이동
        attackPosition++;
    }

    // 마지막 줄 엔터를 쳐서 화면이 끝나도록
    printf("\n");
}

int main() {
    // 공격 애니메이션 실행
    attackAnimation();

    return 0;
}


// 이런 느낌으로 Text Adventure 게임을 한번 만들어보자.

