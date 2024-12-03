#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(int n, vector<int>& colors) {
    unordered_map<int, int> color_count;
    for (int color : colors) {
        color_count[color]++;
    }
    
    vector<int> odd_colors, even_colors;
    for (const auto& pair : color_count) {
        if (pair.second % 2 == 0) {
            even_colors.push_back(pair.first);
        } else {
            odd_colors.push_back(pair.first);
        }
    }

    // Alice's score calculation
    int alice_score = 0;

    // Alice can take all marbles of even-count colors
    alice_score += even_colors.size() * 2;

    // For odd-count colors, Alice takes at least one marble, gets 1 point for each color
    alice_score += odd_colors.size();

    // Alice can take all marbles of one color if total odd colors are odd
    if (odd_colors.size() % 2 == 1) {
        alice_score++;
    }

    cout << alice_score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> colors(n);
        for (int i = 0; i < n; ++i) {
            cin >> colors[i];
        }
        solve(n, colors);
    }
    return 0;
}
