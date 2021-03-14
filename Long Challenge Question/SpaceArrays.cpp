#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < ar[i])
            {
                temp = 1;
                break;
            }
            else
                ans += (i + 1 - ar[i]);
        }
        if (temp == 1)
            cout << "Second" << endl;
        else
        {
            if (ans % 2 == 1)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
    return 0;
}