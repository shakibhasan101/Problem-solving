#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w, y;
    cin>> w, y;
    int Max= max(w,y);
     int numerator = 6-Max+1;
     int g = gcd (numerator, 6);
     cout << (numerator / g) << "/" << (6 / g) << "\n";


    return 0;
}
