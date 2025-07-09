
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r,rem, i=1;
    cin >> k;
    cin >>r;



    while (rem!=r)
    {
        int result= k*i;
        rem=result%10;
        i++;
        if( rem==0) break;
    }


    cout<<i-1;
    return 0;
}
