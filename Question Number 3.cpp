#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,r,x,y,i,sum=0,sum1=0;
    cin>>n>>r>>x>>y;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
        
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        if(arr[i] == 1 && brr[i] == 1)
        {
            sum = sum +x; 
        }
        else if(arr[i]==1 && brr[i] ==0)
        {
            sum1 = sum1 + y;
        }
    }
    
    if(sum > sum1)
    {
        cout<<"promoted";
    }
    else if(sum == sum1)
    {
        cout<<"no change";
    }
    else
    {
        cout<<"demoted";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
