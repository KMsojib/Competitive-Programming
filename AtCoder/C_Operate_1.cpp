#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    string S, T;
    cin >> K >> S >> T;

    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    int lenS = S.length();
    int lenT = T.length();

    if (abs(lenS - lenT) > 1) {
        cout << "No" << endl;
        return 0;
    }

    if (lenS == lenT) {
        int diffCount = 0;
        for (int i = 0; i < lenS; ++i) {
            if (S[i] != T[i]) {
                diffCount++;
            }
        }
        if (diffCount == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (lenS > lenT) {
            swap(S, T);
            swap(lenS, lenT);
        }
        int i = 0, j = 0;
        while (i < lenS && j < lenT) {
            if (S[i] != T[j]) {
                j++;
                if (j - i > 1) {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                i++;
                j++;
            }
        }
        cout << "Yes" << endl;
    }

    return 0;
}