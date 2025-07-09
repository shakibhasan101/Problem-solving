#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, crime=0,untreated,recruit=0;//untreated
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];

    for (int i=0;i<n;i++)
    {
        //
        if (arr[i]==-1)
        {
            if(recruit<=0) untreated ++;
            else  recruit-=1;



        }


        else if ( arr[i]!=-1 )
        {
          recruit = recruit+ arr[i];
        }

    }
    cout <<untreated;

    return 0;
}
