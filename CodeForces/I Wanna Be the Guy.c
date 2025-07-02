#include<stdio.h>
int main()
{
    int n,yes=0;
    scanf("%d",&n);
    int p,q;
    scanf("%d",&p);
        while(p--)
        {
            int x;
            scanf("%d",&x);
            if(x>=n) yes++;
        }

    scanf("%d",&q);
        while(q--)
        {
            int x;
            scanf("%d",&x);
            if(x>=n) yes++;
        }

        if (n>=100) printf("Oh, my keyboard!\n");
        else if (yes==0) printf("Oh, my keyboard!\n");
        else printf("I become the guy.\n");

    return 0;
}
