
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];

        int Count =0;

        for (int i=0;i<n;i++)
            if (a[i]%2!=0) Count+=1;

        if(Count%2==0) cout << "YES"<<endl;
        else cout<<"NO"<<endl;

    }



    return 0;
}
