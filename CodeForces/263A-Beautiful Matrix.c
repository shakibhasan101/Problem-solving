#include<stdio.h>
#include<math.h>
int main()
{
    int matrix[5][5], row, col;

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }

    int a = abs(2-row);
    int b = abs(2-col);

    printf("%d",a+b);


    return 0;

}
