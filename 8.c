#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main(void)
{
    int n = 0, count = 0, sum = 0;
    scanf("%d", &n);
    while(n / 10 != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
        count++;
    }
    sum = sum + n % 10;
    count++;
    printf("%d\n", count);
    printf("%d\n", sum);

    return 0;
}