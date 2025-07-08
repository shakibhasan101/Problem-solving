#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, i=1, result=0;
    cin>> n;

    while (result <=n)
    {
        sum =sum +i;//1+3+6+10+15
        result = result + sum;
        i++;

    }
    /*
    1, 1, 1
    2, 3, 4
    3, 6, 10
    4, 10, 20
    5, 15, 35
    6.
    */

    cout<< i-2;
    return 0;
}
