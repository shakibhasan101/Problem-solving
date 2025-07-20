#include<iostream>
using namespace std;

void Swap(string s[], char a, char b)
{
    char temp=a;
    a=b;
    b=temp;
}


int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        string s;
        cin>>s;
        if(s=="abc"|| s=="acb"||s=="cba"||s=="bac") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
