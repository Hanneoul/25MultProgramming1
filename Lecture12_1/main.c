#include <stdio.h>
#include <windows.h>

void sleep1sec();
void showGameStart();
void showIntro();
void showHoldBackAnger();
void showHitDesk();

// 1초 대기 함수
void sleep1sec() {
    Sleep(1000); // 1초 대기
}

// 첫 번째 화면 출력
void showIntro() {
    system("cls");
    printf("분노 : 멀티미디어과의 중간고사 성적에 대한 고찰\n\n");
    sleep1sec();

    printf("[선택지]\n");
    printf("1. 게임시작\n");
    printf("2. 게임종료\n");
    printf("입력하세요: ");

    char choice = getchar(); getchar(); // Enter 처리
    if (choice == '1') {
        showGameStart();
    }
    else if (choice == '2') {
        printf("게임 종료...\n");
    }
}

// 게임 시작 화면 출력
void showGameStart() {
    system("cls");
    printf("중간고사 성적을 보고 나는 끝없는 분노를 느끼고있다.\n\n");
    sleep1sec();

    printf("[선택지]\n");
    printf("1. 책상을 친다.\n");
    printf("2. 참는다.\n");
    printf("입력하세요: ");

    char choice = getchar(); getchar(); // Enter 처리
    if (choice == '1') {
        showHitDesk();
    }
    else if (choice == '2') {
        showHoldBackAnger();
    }
}

// 책상을 칠 때의 화면 출력
void showHitDesk() {
    system("cls");
    printf("쾅!!!!\n\n");
    sleep1sec();
    printf("후련하다....\n\n");
    sleep1sec();
    printf("다시 화가 나긴 하지만 조금은 후련해졌다....\n\n");
    sleep1sec();
    printf("그런데....\n\n");
    sleep1sec();
    printf("아악... 혈압이...\n\n");
    sleep1sec();
    printf("사망\n\n");
    sleep1sec();
    printf("GameOver\n");
}

// 참을 때의 화면 출력
void showHoldBackAnger() {
    system("cls");
    printf("으....\n\n");
    sleep1sec();
    printf("으으.....\n\n");
    sleep1sec();
    printf("으아아아아아아!!!\n\n");
    sleep1sec();
    printf("사망\n\n");
    sleep1sec();
    printf("GameOver\n");
}

// 게임을 시작하는 함수
int main() {
    showIntro();
    return 0;
}