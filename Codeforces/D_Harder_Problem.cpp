#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) cin >> i;

    map<ll,bool>used;
    map<ll,ll>freq;
    int nextUnused = 1; 

    for (int i : v) {
        used[i] = true;
    }
    for (int i : v) {
        if (freq[i] == 0) {
            cout << i << " ";
            freq[i]++;
        } else {
            while (used[nextUnused]) {
                nextUnused++;
            }
            cout << nextUnused << " ";
            used[nextUnused] = true; 
        }
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}