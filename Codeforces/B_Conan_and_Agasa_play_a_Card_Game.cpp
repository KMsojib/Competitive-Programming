#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// using ll = long long;
// void solve(){
//     ll n;
//     cin>>n;
//     map<ll,ll>mp;
//     for(int i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         mp[x]++;
//     }
//     bool ok = false;
//     for(auto[x,y] : mp){
//         if(y%2){
//            ok =true;
//         }
//     }
//     cout<<(ok?"Conan":"Agasa")<<endl;
// }
int a[100000];
void solve(){
    int n,i=0;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a, a + n);
	for (i = n - 1; i >= 0; i--)
	{
		if (i > 0 && a[i] == a[i - 1])
			i--;
		else if ((n - i) % 2 == 1)
		{
			puts("Conan");
			return;
		}
	}
	puts("Agasa");
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
 