#include<stdio.h>

int main()
{
int y,temp;
scanf("%d",&y);
y++;

while (1)
{
    temp =y;

    int a = y%10;
    y=y/10;

    int b = y%10;
    y=y/10;

    int c = y%10;
    y=y/10;

    int d = y%10;
    y=y/10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
    else
    {
        temp++;
        y=temp;
    }
}
printf("%d\n",temp);
return 0;
}
