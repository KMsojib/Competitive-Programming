#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findMaxPermutationSubarray(const vector<int>& arr) {
    int n = arr.size();
    int maxLength = 0;
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        seen.clear();
        int currentLength = 0;
        for (int j = i; j < n; j++) {
            if (seen.count(arr[j]) > 0) {
                break;
            }
            seen.insert(arr[j]);
            currentLength++;
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = findMaxPermutationSubarray(arr);
        cout << result << endl;
    }

    return 0;
}