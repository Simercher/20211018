#include <stdio.h>
#include <string.h>
//#include <Windows.h>
#include <math.h>

int main(void)
{
    char array[] = "00000000";
    int x, n = 0;
    int i = 7;
    scanf("%d", &n);
    while(n / 2 != 0)
    {
        if(n % 2 == 1)
        {
            array[i] = '1';
        }else if(n % 2 == 0)
        {
            array[i] = '0';
        }
        n = n / 2;
        i--;
    }
    if(n % 2 == 1)
    {
        array[i] = '1';
    }else if(n % 2 == 0)
    {
        array[i] = '0';
    }
    printf("%s\n", array);

    return 0;
}