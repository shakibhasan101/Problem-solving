#include<stdio.h>
int main()
{
    int n,h,count=0;
    scanf("%d",&n);
    scanf("%d",&h);

   for(int i=0;i<n;i++)
   {
       int a;
       scanf("%d",&a);

       if(a<=h)
       count++;
       else
        count+=2;
   }
   printf("%d\n",count);
   return 0;
}
