#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, total=0;
    cin >> n;
    int a[n];

    for (int i=0; i<n; i++)
        cin >> a[i];
    int Max= *max_element(a,a+n);

    for (int i =0; i<n; i++)
    {
        total =total + Max - a[i];

    }

    cout << total<<endl;
    return 0;
}
