#include<stdio.h>
int main()
{
    int w,a,count=0;;
    printf("Enter the weight:\n");
    scanf("%d",&w);

    int half = w/2;


    for (int i=0;i<=half;i++)
    {
        if(w%2==0)
        count++;

    }
    if(count!=0 )
        printf("YES");
    else printf("NO");

    return 0;
}
