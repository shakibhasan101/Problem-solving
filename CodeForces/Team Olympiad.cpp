#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];

    int a=0, b=0, c=0;
    int member1[n], member2[n], member3[n];

    for (int i =0;i<n;i++)
    {
        if(arr[i]==1)
        {
          member1[a]=i+1;
          a++;
        }
        else if (arr[i]==2)
        {
            member2[b]=i+1;
            b++;
        }
        else
        {
            member3[c]= i+1;
            c++;
        }
    }
    int Min = std :: min(std:: min(a, b), std::min(b, c));
    cout<<Min<<endl;
    for (int i=0;i<Min;i++)
        cout<<member1[i]<<" "<<member2[i]<<" "<<member3[i]<<endl;

    return 0;
}
