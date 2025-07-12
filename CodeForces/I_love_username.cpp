#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, c=0;
    cin>>n;
    int t[n];



    if(n>1)
    {
        for (int i=0; i<n; i++)
        {
            cin>> t[i];
        }

        int mx,mn;
        if(t[0]>t[1] )
        {
            mx= t[0];
            mn=t[1];
            c++;
        }
        else if (t[0]<t[1])
        {
            mx= t[1];
            mn= t[0];
            c++;
        }




        for (int i=1; i<n; i++)
        {
            if (t[i]>mn && t[i]<mx)
                continue;
            else
            {
                if(t[i]>mx)
                {
                    mx=t[i];
                    c++;
                }
                else if(t[i]<mn)
                {
                    mn= t[i];
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }

    else
    {
        cin>>t[0];
        cout<<c<<endl;
    }




    return 0;
}
