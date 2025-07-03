#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int Count=1;
    sort (name.begin(), name.end());
    char ch=name[0];

    for(int i =0; i<name.size();i++)
    {
        if(ch!=name[i])
            {
                Count++;
                ch=name[i];
            }
    }

    if(Count%2==0)
        cout<< "CHAT WITH HER!";
    else
        cout<< "IGNORE HIM!";


    return 0;
}
