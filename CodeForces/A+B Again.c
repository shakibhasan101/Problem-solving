#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int test_case;
        scanf("%d",&test_case);
        int digit1 = test_case %10;
        test_case/=10;
        int digit2= test_case%10;

        int sum = digit1+digit2;
        printf("%d",sum);
    }
    return 0;
}
