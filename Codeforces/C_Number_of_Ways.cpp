#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    scanf("%lld",&n);
    ll a[n];
    ll total = 0;
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
        total += a[i];
    }
    if(total%3!=0){
        printf("0\n");
        return 0;
    }
    ll oneThird = total/3;
    ll towThird = 2*oneThird;
    ll oneThirdCount = 0, ans = 0, sum = 0;
    for(ll i=0;i<n-1;i++){
        sum += a[i];
        if(sum==towThird){
            ans += oneThirdCount;
        }
        if(sum==oneThird){
            oneThirdCount++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
