#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c",c);
            c += 2;
        }
        c = 'A' + 2*i;
        printf("\n");
    }
}