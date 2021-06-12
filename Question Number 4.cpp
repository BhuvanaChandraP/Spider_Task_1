#include <iostream>
using namespace std;
int n,i;
static int k,a=0;
void print (int n ,int i)
{
    int j,l;
    //k = (n-1)/2;
    if(i == n-1 || i == 0)
    {
        for(j=n;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    else
    {
        if(i <= n/2)
        {

           for(l=0;l<k;l++)
           {
               cout<<"*";
           }
           for(l=0;l<(n-(k*2));l++)
           {
               cout<<" ";
           }
           for(l=0;l<k;l++)
           {
               cout<<"*";
           }
             cout<<"\n";
           k = k-1;
        }
        else
        {
            if(a==0)
              k = k+2;
            else{
               k = k+1;
            }

            i = i-n/2;
           //k = (n-i)/2;
           for(l=0;l<k;l++)
           {
               cout<<"*";
           }
           for(l=0;l<(n-(k*2));l++)
           {
               cout<<" ";
           }
           for(l=0;l<k;l++)
           {
               cout<<"*";
           }
             cout<<"\n";
           a++;
        }

    }


}
int main()
{
       
int i, j,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a =0;
        

            k = (n-1)/2;
            for (i = 0; i < n; i++)
            {

                print(n,i);

            }

    }

}


