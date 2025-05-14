#include <stdio.h>
#include <windows.h>  // Sleep 함수를 사용하기 위한 헤더 (Windows 전용)

int main()
{
    //for (int i = 1; i <= 5; i++)
    //{
    //    printf("%d초 경과...\n", i);
    //    Sleep(1000);  // 1000밀리초 = 1초 동안 프로그램 일시 정지
    //}
    int i = 0;
    while (i <= 50)
    {
        printf("%d초 경과...\n", i);
        Sleep(10000);  // 1000밀리초 = 1초 동안 프로그램 일시 정지
        i = i + 10;
    }
}