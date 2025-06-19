#include<stdio.h>
void swap (char a[], int i, int j)
{
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

void bubble_sort(char a[])
{
    for (int j=0;j<strlen(a)-1;j+=2)
    {
        for (int i=0;i<strlen(a)-1;i+=2)
        {
            if(a[i]>a[i+2])   swap(a,i,i+2);

        }
    }


}
int main()
{
    char str[105];
    scanf("%s",str);
    bubble_sort(str);
    printf("%s",str);

    return 0;

}
