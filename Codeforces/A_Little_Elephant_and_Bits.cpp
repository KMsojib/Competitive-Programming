// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     bool f = false;
//     string ans = "";
//     int n = (int)s.size();
//     for(int i = 0; i < n; i++) {
//         if(s[i] == '0' && !f) {
//             f = true;
//         } else {
//             ans += s[i];
//         }
//     }
//     if (f) {
//         cout << ans;
//     }
//     else{
//         for(int i=0;i<ans.size()-1;i++){
//             cout<<ans[i];
//         }
//     }
//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    size_t pos = s.find('0');
    if (pos != string::npos) {
        s.erase(pos, 1);
    } else {
        s.pop_back();
    }

    cout << s << endl;
    return 0;
}
