#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int lower = 0, upper = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i]))
            upper++;
        else if (islower(s[i]))
            lower++;
    }

    if (lower < upper)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(),::tolower);

    cout << s << endl;

    return 0;
}
