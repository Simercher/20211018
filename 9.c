#include <stdio.h>
#include <string.h>
//#include <Windows.h>
#include <math.h>

int main(void)
{
    int x, y, z, j;
    int gcd, lcm;
    scanf("%d%d", &x, &y);
    z = x;
    j = y;
    while(y != 0 && x != 0)
    {
        if(x > y)
        {
            x = x % y;
        }else if(y > x)
        {
            y = y % x;
        }
    }
    if(x > 0)
    {
        gcd = x;
        printf("%d\n", x);
    }else 
    {
        gcd = y;
        printf("%d\n", y);
    }
    lcm = z * j / gcd;
    printf("%d\n", lcm);

    return 0;
}