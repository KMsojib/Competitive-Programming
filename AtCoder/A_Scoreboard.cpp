#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    int sum1=0,sum2=0;
    while(t--){
        int x,y;    cin>>x>>y;
        sum1+=x;    sum2+=y;
    }

    if(sum1>sum2){
        cout<<"Takahashi\n";
    }
    else if(sum2>sum1){
        cout<<"Aoki\n";
    }
    else{
        cout<<"Draw\n";
    }

    return 0;
}
