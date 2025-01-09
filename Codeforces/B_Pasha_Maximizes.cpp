#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k;
    cin>>k;

    int n = (int)s.size();
    for (int i = 0; i < n && k > 0; i++)
    {
        int idx = i;
        for(int j = i + 1; j < n && j <= i + k; j++)
        {
            if(s[j] > s[idx])
            {
                idx = j;
            }
        }

        for(int j = idx; j > i; j--)
        {
            swap(s[j], s[j-1]);
            --k;
        }
    }

    cout<<s<<endl;
    return 0;
}