#include<stdio.h>
int main()
{
    int M, N, total;
    scanf("%d%d",&M, &N);

    if (M%2==0)
    {
        total = (M/2)*N;
    }

    else
    {
        int a=M/2;
        int b = a*N;

        int c = N/2;

        total = b+c;
    }
    printf("%d",total);
}
