#include <stdio.h>
#include <string.h>
//#include <Windows.h>

//int GCD (int, int);

//char outbuf[1000];
int main(void)
{
    int x= 0;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= x; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");
    //system("pause");
    return 0;
}