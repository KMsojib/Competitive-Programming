#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;

    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    vector<int> c(n);
	for (int i = 0; i < n; ++i) {
		c[i] = a[i] - b[i];
	sort(c.begin(), c.end());
	
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		if (c[i] <= 0) continue;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		ans += i - pos;
	}
	
	cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
