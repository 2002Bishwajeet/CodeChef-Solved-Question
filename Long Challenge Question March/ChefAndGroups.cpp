#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool check = false;
        //int i = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                check = true;
            }

            if (s[i] == '0' && check)
            {
                count++;
                check = false;
            }
        }
        if (check)
            count++;

        cout << count << endl;
    }
    return 0;
}