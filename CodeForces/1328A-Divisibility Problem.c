#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int t[n];
    for (int i=0;i<n;i++)
    {
        int a, b;
        scanf("%d%d",&a, &b);

        t[i] = (b - (a % b)) % b;
        printf("%d\n",t[i]);

    }




    return 0;
}
