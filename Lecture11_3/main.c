#include <stdio.h>
#include <time.h>
#include <windows.h>  // Sleep 함수 사용을 위한 헤더 (Windows 전용)

#define FPS 60                        // 목표 프레임 수 (60 FPS)
#define FRAME_TIME (1000 / FPS)      // 한 프레임에 소요되어야 할 시간 (밀리초 단위, 16.67ms 정도)

int moveCursor(int x, int y)
{
    printf("\033[%d;%dH",y+1,x+1);
}

int main() {
    int frameNum = 0;
    while (1) {  // 무한 루프: 게임 루프 실행
        clock_t frameStart = clock();  // 현재 시간 저장 (프레임 시작 시간)

        // --- 게임 로직 업데이트 및 렌더링 처리 부분 ---
        moveCursor(0, 0);
        printf("게임 프레임 %d번 처리\n", frameNum);
        frameNum = frameNum + 1;
        // ------------------------------------------------

        clock_t frameEnd = clock();  // 프레임 작업 완료 후 현재 시간 저장

        // 프레임 처리에 걸린 시간 계산 (밀리초 단위로 환산)
        double elapsed = (double)(frameEnd - frameStart) * 1000 / CLOCKS_PER_SEC;

        // 프레임이 너무 빨리 끝났으면 남은 시간만큼 대기
        if (elapsed < FRAME_TIME) {
            Sleep((DWORD)(FRAME_TIME - elapsed));  // 밀리초 단위로 대기
        }
        // 프레임이 오래 걸렸다면 대기하지 않고 바로 다음 프레임 시작
    }

    return 0;
}