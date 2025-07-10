#include<bits/stdc++.h>
using namespace std;
int main()
{
    string letter;
    cin >> letter;
    char a[1000];
    int j=0;

    for (int i =0;i<letter.size()-1;i++)
    {

        a[j] = letter[i];
        j++;


    }

    for(int i =0;i<100;i++)
    {
        cout<<a[i];
    }
    cout << NULL;


    return 0;
}
