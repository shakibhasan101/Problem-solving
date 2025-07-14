#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int card [n];
    for (int i=0;i<n;i++)
        cin>> card[i];
    int sereja=0, dima=0;

    bool toggle = true;

    int i=0;

    while (i<n)
    {
        if(toggle)
        {
            if(card[i]>card[n-1])
            {
                sereja = sereja + card[i];
                i++;
            }

            else
            {
                sereja = sereja + card[n-1];
                n--;
            }

            toggle =false;
        }
        else
        {
            if(card[i]>card[n-1])
            {
                dima = dima+card[i];
                i++;
            }

            else
            {
                dima = dima + card[n-1];
                n--;
            }
            toggle =true;

        }
    }



    cout <<sereja<<" "<<dima<<endl;
    return 0;
}
