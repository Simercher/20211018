#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main(void)
{
    double sum = 0;
    int n= 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum = (double)sum + (double)1 / ((2 * i - 1) * 2 * i);
    }
    printf("%.16f\n", (double)sum);
    puts("");
    //system("pause");
    return 0;
}