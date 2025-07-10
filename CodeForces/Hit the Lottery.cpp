#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int result=0;
    cin >> n;
    while (n!=0)
    {
        if(n>=100)
        {
            result =result+ (n/100);
            n=n%100;
        }
        else if (n>=20 && 100>n)
        {

            result = result + (n/20);
            n=n%20;
        }
        else if (10<=n && 20>n)
        {
            result = result + (n/10);
            n=n%10;
        }
        else if (5<=n && 10>n)
        {
            result = result + (n/5);
            n=n%5;
        }
        else if (0<n && 5>n)
        {
            result = result + (n/1);
            n= n%1;
        }
    }
    cout <<result<<endl;

    return 0;

}
