#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int test;
        cin >> test;
        int digit = test%10;

        int Count=0 ;

        for (int j=1;j<=digit;j++) // 0-1
        {

            for (int i=0; i<4;i++)
            {

                Count ++;
                temp = j*pow(10,i)+ ;

                if(temp==test) break;

                cout<<j<<"="<<temp<<endl;

            }
        }
        cout << Count<<endl;
    }
    return 0;
}
