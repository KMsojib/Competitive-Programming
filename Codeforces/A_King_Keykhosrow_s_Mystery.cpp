#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;    cin>>a>>b;
        long long ans =0;
        for(int i=a;i<=1LL*a*b;i++){
            if(i%a == i%b){
                ans = i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}