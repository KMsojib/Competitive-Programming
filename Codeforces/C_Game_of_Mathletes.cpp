#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> cnt(2 * n + 1);
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        cnt[x]++;
    }
    
    int ans = 0;
    for (int i = 1; i <= k / 2; i++) {
        if (i * 2 == k) {
            ans += cnt[i] / 2;
        } else {
            ans += std::min(cnt[i], cnt[k - i]);
        }
    }
    std::cout << ans << "\n";
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}