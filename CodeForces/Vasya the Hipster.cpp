#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>> a>>b;
    int min_day = min (a,b);
    int left_shocks;
    if(a>b)
        left_shocks = a-b;
    else
        left_shocks = b-a;

    cout<<min_day<<" "<<left_shocks/2<<endl;
    return 0;
}
