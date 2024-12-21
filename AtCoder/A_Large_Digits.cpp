#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int sum1 = 0, sum2 = 0;
    for(auto x : a) { sum1 += x - '0';}
    for(auto y : b) { sum2 += y - '0';}
    cout<<max(sum1,sum2);
    return 0;
}