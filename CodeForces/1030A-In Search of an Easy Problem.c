#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int a[n];
        scanf("%d",&a[i]);

        if(a[i]==1) count++;
    }
    if(count==0) printf("EASY");
    else printf("HARD");
    return 0;
}
