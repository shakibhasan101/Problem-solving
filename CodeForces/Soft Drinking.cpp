#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>>  l>> c>> d>> p>> nl>> np;

    int drinks= k*l;
    int slices= c*d;
    int mn;

    drinks = drinks/nl;
    p = p/np;

    if(drinks < slices && drinks<p )
        mn= drinks;
    else if (slices< drinks && slices <p)
        mn= slices;
    else mn= p;


    int result = mn/n;
    cout << result <<endl;
    return 0;
}
