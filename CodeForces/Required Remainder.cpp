//
//#include<iostream>
//using namespace std;
//int main()
//{
//long long t;
//cin>> t;
//while (t--)
//{
//long long a, b, n;
//cin>>a>>b>>n;
//unsigned long long k=0;
//if(n%a==0)
//    k= n-a+b;
//else if (n%a>=b)
//    k= (n/a)*a +b;
//else
//    k = (n/a-1)*a +b;
//
//cout<<k<<endl;
//}
//return 0;
//}


//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    ll x,y,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        ll ans = 0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }
    }

    return 0;
}

