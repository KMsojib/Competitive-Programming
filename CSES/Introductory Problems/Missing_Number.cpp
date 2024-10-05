#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int ara[n-1];
    long long int sum1=0,sum2=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>ara[i];
        sum2+=ara[i];
    }
    sum1+=n*(n+1)/2;
    long long int T_sum=sum1-sum2;
    cout<<T_sum<<endl;
    return 0;
}
