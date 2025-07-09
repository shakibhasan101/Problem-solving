#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string name;
    string original="codeforces";
    cin>>n;
    while (n--)
    {
        int c=0;

        cin>>name;

    for ( int i=0;i<name.size();i++)
    {
        if(name[i]!=original[i]) c++;
    }
    cout << c<<endl;

    }

    return 0;
}
