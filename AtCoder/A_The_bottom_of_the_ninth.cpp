#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int sum1=0;
        for(int i=0;i<9;i++){
            int x;  cin>>x;
            sum1+=x;
        }

        int sum2 = 0;
        for(int i=0;i<8;i++){
            int y;  cin>>y;
            sum2+=y;
        }
        int sum = sum1-sum2;
        if(sum == 0){
            cout<<1<<endl;
        }
        else{
            cout<<sum+1<<endl;
        }
    }

    return 0;
}
