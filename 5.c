#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main(void)
{
    int sum = 0, x= 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++)
    {
        sum = sum + i * (i + 1);
    }
    printf("%d\n", sum);
    puts("");
    //system("pause");
    return 0;
}