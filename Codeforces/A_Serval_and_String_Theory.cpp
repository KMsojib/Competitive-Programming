#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    string s;
    int k;
    cin >> n >> k >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(!k) {
      puts(s < t ? "YES" : "NO");
    }
    else {
      set<int> st;
      for(auto x : s) {
        st.insert(x);
      }
      puts((int) st.size() > 1 ? "YES" : "NO");
    }
  }
  return 0;
}
