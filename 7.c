#include <stdio.h>
#include <string.h>
#include <Windows.h>
//#include <math.h>

int main(void)
{
    int x, n = 0;
    scanf("%d", &n);
    x = (int)sqrt(n);
    for(int i = 2; i <= x; i++)
    {
        if(n % i == 0)
        {
            printf("%s\n", "NO");
            puts("");
            return 0;
        }
    }
    printf("%s\n", "YES");
    puts("");

    return 0;
}