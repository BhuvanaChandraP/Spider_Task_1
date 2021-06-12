#include <iostream>
using namespace std;
unsigned long long int binaryToDecimal(string n)
{
    string num = n;
    unsigned long long int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    unsigned long long int base = 1;

    unsigned long long int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
void decToBinary(unsigned long long int n , unsigned long long int length1)
{

    unsigned long long int binaryNum[100001];
    unsigned long long int lenght2;
    
    unsigned long long int i = 0;
    lenght2 = 0;
    while (n > 0) {


        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        lenght2++;
    }
    //lenght2 = binaryNum.size()

    if( lenght2 == length1)
    {
        for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    }
    else
    {
        cout<<"-1";
        exit(0);
    }

    cout<<" ";
}
int main ()
{
    unsigned long long int n,i,ctr=0;
    string str;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            ctr++;
        }
    }
    if(ctr == n)
    {
        cout<<"-1";
        return 0;
    }
    unsigned long long int dec = binaryToDecimal(str);
    //cout<<dec;
    decToBinary(dec-1,n);
    decToBinary(dec+1,n);
}

