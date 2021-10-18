#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main(void)
{
    int x= 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            printf("%d\n", i);
        }
    }
    puts("");

    return 0;
}