#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isZeroArray(std::vector<int>& a,std::vector<std::vector<int>>& queries) {
        int n = (int)a.size();
        std::vector<int> b(n + 1, 0);
        for (auto querie : queries) {
            b[querie[0]] = -1;
            if (querie[1] + 1 < n) {
                b[querie[1] + 1] = 1;
            }
        }

        for (int i = 1; i < n; i++) {
            b[i] += b[i - 1];
        }

        for (int i = 0; i < n; i++) {
            a[i] -= b[i];
            if (a[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 0, 1};
    std::vector<std::vector<int>> queries = {{0, 2}};
    
    bool result = solution.isZeroArray(nums, queries);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}