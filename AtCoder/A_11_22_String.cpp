#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1)
    {
        int mid = (n + 1) / 2 - 1;
        for (int i = 0; i < mid; i++)
        {
            if (s[i] != '1')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        if (s[mid] != '/')
        {
            cout << "No" << endl;
            return 0;
        }
        for (int i = mid + 1; i < n; i++)
        {
            if (s[i] != '2')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}