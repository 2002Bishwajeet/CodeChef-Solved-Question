#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // Enables Fast io
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int ans = 0;
        int speedprevcar = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (speedprevcar >= ar[i])
            {
                ans++;
                speedprevcar = ar[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}