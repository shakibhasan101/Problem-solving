#include<bits/stdc++.h>
using namespace std;


bool is_composite (int n)
{

    int Count=0;
    for (int i =2;i<n;i++)
    {
        if(n%i==0) Count++;
    }

    if (Count !=0) return true;
    else return false;
}



int main()
{
    int n;

        cin>> n;
    int a , b;


    for (int i=4 ;i<n;i++)
    {
        if(is_composite(i))
        {
            b = n - i;
            if(is_composite(b))
            {
                cout<< i<<" "<<b<<endl;
                break;

            }

        }
    }



    return 0;
}
