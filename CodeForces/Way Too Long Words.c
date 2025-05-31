#include<stdio.h>
#include<string.h>
struct word {
    char a[100];
};

int main()
{
    int n;
    struct word name[100];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
    scanf("%s",name[i].a);
    }


    for (int i=0;i<n;i++)
        {

             int len = strlen(name[i].a);
                if(len<=10)
                    printf("%s\n",name[i].a);
                if (len>10)
                    printf("%c%d%c\n",name[i].a[0],len-2, name[i].a[len-1]);

        }

    return 0;
}
