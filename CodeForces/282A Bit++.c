/*
I find a technical problem while solving this one. when I use gets() function instead of scanf() then it execute the test case 1  fewer times.
if I use getchar() after scanf(); then it became fine.
*/

#include<stdio.h>
int main()
{
    int n,result=0;
    scanf("%d",&n);
//    getchar();
    while(n!=0)
    {
        char a[5];
//        gets( a);

        scanf("%s",a);
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='+')
            {
                result+=1;
                break;
            }

            else if (a[i]=='-')
            {
                result -=1;
                break;
            }

        }
        n--;
    }
    printf("%d",result);

    return 0;
}
