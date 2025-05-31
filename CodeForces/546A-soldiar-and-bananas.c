#include<stdio.h>
int main()
{
    int n,w,k,sum=0,borrow;
    scanf("%d%d%d",&k,&n,&w);

    for(int i=1;i<=w;i++)
    {
        int a=k*i;
        sum=sum+a;
    }

    if(sum>n)
    borrow = sum-n;
    else
        borrow =0;


    printf("%d",borrow);
    return 0;
}
