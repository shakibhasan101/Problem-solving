#include<stdio.h>
int main()
{
    int x,rem,result;
    scanf("%d",&x);
    if(x%5==0)
        result=x/5;
    else
        result = (x/5)+1;

    printf("%d",result);

return 0;

}
