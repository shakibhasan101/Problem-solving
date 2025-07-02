#include<iostream>
using namespace std;

int main()
{
 int n,total=0, max_capacity=0;
 cin>>n;
 while (n--)
 {
     int a ,b;
     cin >> a>> b;
        total = total -a ;
        total = total +b ;

    if(max_capacity<total)
        max_capacity=total;
    cout<<"total:"<<total<<"\n";
         cout<<"Max:"<<max_capacity<<"\n";

 }

 cout<<max_capacity;

 return 0;
}
