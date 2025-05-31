#include<stdio.h>
int main()
{
    int a,i=0, b;
    scanf("%d%d",&a, &b);

    while (a<=b)
    {
        i++;
        a=a*3;
        b=b*2;

    }
    printf("%d",i);

    return 0;
}
