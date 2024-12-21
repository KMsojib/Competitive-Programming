#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test_case = 1;  
    cin >> test_case;
    cin.ignore();

    while (test_case--) {
        string s; 
        getline(cin, s);

        vector<string> words;
        istringstream stream(s);
        string word;

        while (stream >> word) {
            words.push_back(word);
        }

        stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() > b.size();
        });

        for (const string &w : words) {
            cout << w << " ";
        }
        cout << endl;
    }
    return 0;
}
