#include <stdio.h>
#include <conio.h>

int main()
{
    char c;
    c = 'a';

    int i = 0;
    while (i!=5)    /*while (i<5)*/
    {
        i = i + 1;
        c = _getch();
        if (c == 'q')
        {
            i = 5;
        }
        
    }

    return 0;
}

