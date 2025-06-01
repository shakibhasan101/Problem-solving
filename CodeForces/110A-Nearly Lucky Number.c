#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while (n!=0)
    {
        int rem = n%10;
        n=n/10;

        if(rem!=4 && rem!=7)
        {
            count++;
        }
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
