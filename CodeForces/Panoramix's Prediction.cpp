#include<iostream>
using namespace std;

bool is_prime(int n)
{
    int Count =0;
    for (int i=2;i<n;i++)
        if(n%i==0) Count+=1;

    if(Count == 0) return true ;
    else return false ;
}
int next_prime(int n)
{
    while (!is_prime(n))
        n++;

    return n;



}
int main()
{
    int a, b;
    cin >>a>>b;



    if(is_prime(a) && b==next_prime(a+1))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    cout<<is_prime(a)<<" "<<next_prime(a+1)<<endl;;

    return 0;
}
