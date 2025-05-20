#include <stdio.h>
#include <time.h>

/*
    [C 언어 기본 자료형 설명]

    - int       : 정수형. 보통 4바이트. 예: 1, -3, 42
    - long      : 더 큰 범위의 정수. 보통 4~8바이트. 예: 1000000000L
    - float     : 단정도 실수형 (소수점). 보통 4바이트. 예: 3.14f
    - double    : 배정도 실수형. 보통 8바이트. 예: 3.141592
    - char      : 문자형. 1바이트. 예: 'a', 'Z'
    - void      : 반환 값이 없음을 나타냄. 예: void 함수()
    - clock_t   : 시간 측정을 위한 타입. 정수형 기반이며 <time.h>에서 정의됨
*/

int moveCursor(int x, int y)
{
    printf("\033[%d;%dH", y + 1, x + 1);
}

int main() {
    clock_t start, end;       // 시작과 끝 시간 저장용 변수
    double cpu_time_used;     // 경과 시간 (초) 저장용 변수

    start = clock();          // 현재 CPU 시간을 시작 시간으로 저장

    int i = 0;
    // 예시 작업: 시간이 조금 걸리는 루프 (시간 측정을 위한 더미 작업)
    while (i < 100000)
    {
        moveCursor(0, 0);
        printf("으히히힣 %d\n",i);
        i = i + 1;
    }

    end = clock();            // 현재 CPU 시간을 끝 시간으로 저장

    // 경과 시간 계산 (틱 수 차이 / 초당 틱 수)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n작업에 걸린 시간: %.3f초\n", cpu_time_used);  // 결과 출력

    return 0;
}