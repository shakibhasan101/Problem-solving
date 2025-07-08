#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int len;
        string name;
        cin >> len >> name;

        string target = "Timur";
        sort(name.begin(), name.end());
        sort(target.begin(), target.end());

        if (name == target)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
