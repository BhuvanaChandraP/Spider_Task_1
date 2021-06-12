#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check (string str ,int  n)
{
    int flg =0,i,j;
    if(n%2 == 1)
    {
        return 0;
    }
    else
    {
        for(i=0,j=n/2;i<n/2;i++,j++)
        {
            if(str[i] == str[j])
            {
                flg++;
            }
        }
        if(flg == n/2)
        {
            return 1;
        }

    }
    return 0;

}

int main() {
    int n;
    string str;
    int i,res=0;
    cin>>n;
    cin>>str;
    for(i=n;i>0;i=i/2)
    {
        res += check(str ,i);
    }
    cout<<res<<"\n";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
