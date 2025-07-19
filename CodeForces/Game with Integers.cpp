#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int a;
        bool win=false;
        cin >>a;
        int b =a;
        for (int i=0;i<10;i+=2)
        {
                a+=i;
                b-=i;
                if(a%3==0 || b%3==0)
                    win = true;
                else win =false;
        }
        if (win) cout<<"First"<<endl;
        else cout<<"Second"<<endl;

    }
    return 0;
}
