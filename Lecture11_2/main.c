#include <stdio.h>
#include <windows.h>  // Sleep �Լ��� ����ϱ� ���� ��� (Windows ����)

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d�� ���...\n", i);
        Sleep(1000);  // 1000�и��� = 1�� ���� ���α׷� �Ͻ� ����
    }
}