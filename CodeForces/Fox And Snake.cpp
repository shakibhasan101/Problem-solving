#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a, b;
    cin>>a>>b;
    bool head = true ;

    for (int rows=0; rows<a; rows++)
    {


        if(rows%2==0)
        {
            for (int cols=0; cols<b; cols++)
            {

                cout<<"#";
            }
            cout<<endl;
        }


        else
        {

            if(head)
            {
                for (int cols=0; cols<b; cols++)
                {
                    if(cols==b-1) cout <<"#";
                    else cout <<".";

                }
                cout<<endl;
                head = false;

            }

            else
            {
                for (int cols=0; cols<b; cols++)
                {
                    if(cols==0) cout <<"#";
                    else cout <<".";

                }
                cout<<endl;
                head = true;


            }

        }

    }

    return 0;
}
