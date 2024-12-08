#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int cn = 1, crn = 1;
        while (1)
        {
            if (crn >= n)
            {
                break;
            }
            else
            {
                cn++;
                crn = (crn << 1) + 2;
            }
        }
        cout<<cn<<endl;
    }
    return 0;
}