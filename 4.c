#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main(void)
{
    unsigned long long int sum = 1, x= 0;
    scanf("%d", &x);
    for(int i = x; i > 0; i--)
    {
        sum = sum * i;
    }
    printf("%llu\n", sum);
    puts("");
    //system("pause");
    return 0;
}