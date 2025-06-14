#include<stdio.h>
#include<string.h>
void swap(char arr[], int a, int b)
{
    char temp =arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void bubble_sort(char a[])
{
    int i, j;

    int ub =strlen(a);

    for (j=0; j<ub-1; j+=2)
    {
        for (i=0; i<ub-j-1; i+=2)
        {
            if(a[i]>a[i+2])
            {
                swap(a, i, i+2);
            }
        }

    }
}

//void bubble_sort(char a[])
//{
//    int i, j;
//
//    int ub =strlen(a);
//
//    for (j=0; j<ub-1; j++)
//    {
//        for (i=0; i<ub-j-1; i++)
//        {
//            if(a[i]>a[i+1])
//            {
//                swap(a, i, i+1);
//            }
//        }
//
//    }
//}


//void display(char a[])
//{
//    for (int i=0; a[i]!='\0'; i++)
//    {
//        printf("%c",a[i]);
//    }
//}



int main()
{
    char data[100];
    int i=0,j=0;
    scanf("%[^\n]",data);
    bubble_sort(data);
    printf("%s",data);


    return 0;
}
