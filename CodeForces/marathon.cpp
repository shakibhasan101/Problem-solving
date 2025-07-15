#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin>>n;
    while (n--)
    {
        int Count=0;
        cin >>a>>b>>c>>d;

    if(a<b)
        Count++;
    if(a<c)
        Count++;
    if(a<d)
        Count++;
    cout << Count<<endl;

    }
    return 0;
}

