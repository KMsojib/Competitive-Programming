#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        floor(n *= 1.08);
        if (n < 206)
        {
            cout << "Yay!" << endl;
        }
        else if(n>206)
        {
            cout << ":(" << endl;
        }
        else
        {
            cout << "so-so" << endl;
        }
    }
    return 0;
}
/*
    1. Application of monti carlo simulation
    2. adv and disadv of monticarlo simulation
*/