#include<stdio.h>
#define size 50
int main()
{
    int target, nums, arr[size],i;
    scanf("%d",&nums);

    for (i=0;i<nums;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&target);

    for (i=0;i<nums;i++)
    {
        if(arr[i]<target)
            int value= arr[i];
    }
    return 0;
}
