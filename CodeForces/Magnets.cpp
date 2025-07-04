#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Count=0;
    cin>> n;

    string mag[n];
  for (int i=0;i<n;i++)
  {
      cin>>mag[i];

  }
  for(int i=0;i<n;i++)
  {
      if(mag[i]!=mag[i+1])
        Count++;
  }
  cout<< Count;
    return 0;
}
