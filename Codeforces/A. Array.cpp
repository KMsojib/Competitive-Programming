#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> neg, pos, zero;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x == 0) zero.push_back(x);
        if (x < 0) neg.push_back(x);
        if (x > 0) pos.push_back(x);
    }

    if (pos.size() == 0) {
        for (int i = 0; i < 2; i++) {
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }

    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    printf("%d", neg.size());
    for (int i = 0; i < neg.size(); i++) {
        printf(" %d", neg[i]);
    }
    printf("\n%d", pos.size());
    for (int i = 0; i < pos.size(); i++) {
        printf(" %d", pos[i]);
    }
    printf("\n%d", zero.size());
    for (int i = 0; i < zero.size(); i++) {
        printf(" %d", zero[i]);
    }
    puts("");

    return 0;
}
