#include<bits/stdc++.h>
using namespace std;
int M, F[100002], L, R, i;
string S;
int main()
{
    cin >> S >> M;
    for (i = S.length() - 2; i >= 0; i--)
        F[i] = F[i + 1] + (S[i] == S[i + 1]);
    while (M--)
    {
        cin >> L >> R;
        cout << F[L - 1] - F[R - 1] << endl;
    }
}