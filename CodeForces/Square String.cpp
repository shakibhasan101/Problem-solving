#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string word;
    cin>> n;
    while (n--)
    {
        cin>> word;
        if(word.size() % 2== 0)
        {
           int i,  len = word.size();
           char  a[len], b[len];

           for ( i=0 ;i<len/2;i++)
                a[i] = word[i];
                a[i]=NULL;

            int temp =0;

           for (i=len/2; i<len ;i++)
           {
               b[temp] = word[i];
               temp++;
           }

                b[temp] = NULL;

            int c=0;

            for (int i = 0; a[i]!= NULL;i++)
            {
                if(a[i]!=b[i]) c++;
            }

           if(c==0) cout << "YES"<< endl;
           else cout <<"NO"<< endl;

        }

        else
            cout<< "NO"<<endl;
    }
    return 0;
}
