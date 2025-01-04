#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, median;
    cin >> n >> median;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    while (true){
        int idx = (a.size() - 1) / 2;
        if (a[idx] == median){
            break;
        }
        if (a[idx] < median){
            a.push_back(median);
        }
        else{
            a.insert(a.begin(), median);
        }
        cnt++;
        sort(a.begin(), a.end());
    }
    cout << cnt << endl;
    return 0;
}

/*
    linkedin: https://www.linkedin.com/in/md-kawsar-mahmud/
    Problem Solving
    CF: https://codeforces.com/profile/Hiro-Hamada
    LC: https://leetcode.com/u/Kawsar_mahmud_/
*/