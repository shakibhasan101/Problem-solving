#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for ( int j=0; j<n; j++)
            cin>>arr[j];


        if(arr[0]!=arr[1])
        {
            if(arr[1]==arr[2])
                cout<<"1"<<endl;
            else cout <<"2"<<endl;
        }
        else
        {
            for (int i=2; i<=n-1; i++)
            {
                if(arr[i]!=arr[i-1])
                {
                    cout<<i+1<<endl;
                    break;
                }

            }
        }

    }
    return 0;
}
