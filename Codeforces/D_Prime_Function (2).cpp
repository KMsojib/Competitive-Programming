#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)


bool is_prime(int x){
    bool f = false;
    if(x==1){
        return false;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0 && x!=2){
            return false;
        }
    }
    return true;
}
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int x;  cin>>x;
        if(is_prime(x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
