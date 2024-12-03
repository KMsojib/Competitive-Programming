#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int f = 1;

    while (true) {
        if (f & 1) {
            if (x == 0 && y >= 22) {
                y -= 22;
            }
            else if (x == 1 && y >= 12) {
                x -= 1;
                y -= 12;
            }
            else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            }
            else {
                cout << "Hanako" << endl;
                break;
            }
        } else {
            if (y >= 22) {
                y -= 22;
            }
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
            }
            else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            }
            else {
                cout << "Ciel" << endl;
                break;
            }
        }
        f++;
    }

    return 0;
}
