#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n;
     cin>> n;
     int a[n];

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

     int Max =a[0], idxmax=0;
     int Min = a[0], idxmin=0;

     for (int i=1;i<n;i++)
     {


         if(Max<a[i])
         {
              Max= a[i];
              idxmax= i;
         }


         if(Min>=a[i])
         {
             Min= a[i];
             idxmin = i;
         }

     }

     if(idxmax<idxmin)
        cout << idxmax+(n-1-idxmin)<<endl;
     else
        cout<< idxmax + (n-1-idxmin-1)<<endl;

     return 0;
 }
