#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>>n;
          int a[n];
          for (int i =0; i<n; i++)
            cin>> a[i];

           int Max=0;
         int Count=0;

        for (int i =0; i<n; i++)
        {


            if(a[i]==0)
            {
                 Count++;
                 Max=max(Count, Max);
            }

            else Count=0;
        }
        cout<<Max<<endl;
    }
    return 0;

}
