#include <stdio.h>
#include <string.h>
//#include <Windows.h>

//int GCD (int, int);

//char outbuf[1000];
int main(void)
{
    int x, sum = 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++)
    {
        if(i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    
    printf("%d\n", sum);
    //system("pause");
    return 0;
}