#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[4],c=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort (s, s+4);
    for (int i =0;i<4;i++)
    {
        if(s[i]==s[i+1]) c++;

    }
    cout<< c;
    return 0;
}
