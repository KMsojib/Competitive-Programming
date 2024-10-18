#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;   cin>>s;
    int p=0,m=0;
    p=count(s.begin(),s.end(),'+');
    m=count(s.begin(),s.end(),'-');
    cout<<p-m<<endl;

    return 0;
}
