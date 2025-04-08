#include <Windows.h>
#include <stdio.h>

void gotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main() {
    gotoXY(10, 10);

    // 빨간색 텍스트
    printf("\033[31m이 텍스트는 빨간색입니다.\033[0m\n");

    // 초록색 텍스트와 노란색 배경
    printf("\033[32m\033[43m이 텍스트는 초록색이고 배경은 노란색입니다.\033[0m\n");

    // 굵은 텍스트와 파란색 텍스트
    printf("\033[1m\033[34m이 텍스트는 굵고 파란색입니다.\033[0m\n");

    return 0;
}

