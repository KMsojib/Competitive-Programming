#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(int i=2; i<n+1; i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1; i<n+1; i+=2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}