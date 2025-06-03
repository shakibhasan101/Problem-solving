#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while (n--)
    {
        int t;
        int parts[10];
        int count=0;
        int mul=1;

        scanf("%d",&t);

        while (t!=0)
        {
            int rem = t%10;
            if(rem!=0)
                parts[count++]= rem*mul;
            t=t/10;
            mul*=10;
        }

        printf("%d\n",count);
        for(int i=0;i<count;i++)
        {
            printf("%d ",parts[i]);
        }
        printf("\n");


    }
    return 0;
}


//
//Another way of solution: but there have a precision issue
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int t[n], temp[n];
//    for (int i=0;i<n;i++)
//    {
//        scanf("%d",&t[i]);
//        int count=0;
//
//        temp[i]=t[i];
//
//        while (t[i]!=0)
//        {
//            int len = log10(t[i])+1;
//            int digit = t[i]/ pow(10,len-1);
//            int b = digit* pow(10,len-1);
//            int c = t[i]-b;
//            t[i]=c;
//            count++;
//        }
//
//        printf("%d\n",count);
//
//        while (temp[i]!=0)
//        {
//            int len = log10(temp[i])+1;
//            int digit = temp[i]/ pow(10,len-1);
//            int b = digit* pow(10,len-1);
//            printf("%d ",b);
//            int c = temp[i]-b;
//            temp[i]=c;
//        }
//        printf("\n");
//
//    }
//
//    return 0;
//}
