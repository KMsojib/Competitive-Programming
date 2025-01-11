#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int op = 0, i = 0, j = n - 1;
    sort(a.begin(), a.end());
    while (i <= j){
        if (a[i] + a[j] <= k){
            i++;
        }
        j--;
        op ++;;
    }
    printf("%d", op);
    return 0;
}