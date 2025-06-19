#include<stdio.h>
int main()
{
    int n,anton=0,danik=0;
    scanf("%d",&n);
    char arr[n];



    for (int i=0;i<n;i++)
    {
            scanf(" %c",&arr[i]);


        if(arr[i]=='D') danik++;

        else anton++;
    }

    if(anton>danik) printf("Anton\n");
    else if (anton<danik) printf("Danik\n");
    else if (anton==danik) printf("Friendship\n");


    return 0;
}
