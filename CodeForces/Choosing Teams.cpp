#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>> n>>k;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];

        int Count =0;

        for (int i =0;i<n;i++)
        {
            if(5-a[i]>=k) Count++;
        }
        cout<<Count/3<<endl;

    return 0;
}
