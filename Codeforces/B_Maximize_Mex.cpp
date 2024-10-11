#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n,x;
	cin>>n>>x;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
        cin>>a[i];
    }
	map<ll,ll>mp;
	for (auto c:a){
		mp[c]++;
	}
	for (int i=0;i<=n;i++){
		if (mp[i]==0){
			cout << i << endl;return;
		}
		mp[i+x]+=mp[i]-1;
	}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}