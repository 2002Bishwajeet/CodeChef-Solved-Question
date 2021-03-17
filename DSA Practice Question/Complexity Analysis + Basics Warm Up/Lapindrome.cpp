#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int left[26] = {0};
        int right[26] = {0};
        //Concept Of Frequency Arrays Used
        /* 
    Basically hum har alphabet ko ek no assign kar dete hai aur jitni baar occur hoga usko count kar lenge 
    Hum Assign Kar rhe hai ASCII Values se
    like a ki value 97 hoti hai 
    b 98
    c 99 and so on......
    so a-a=0
    b-a = 1
    c-b =0
    toh approach yeh hai ki do array bana do right left jo counting rkhega alphabet ki right and left resp.
    phir loop chalao half tak
    letter se minus karke index toh nikal hi jaegi phir usse plus kardo EZ peezy
    */
        int len = s.length();
        for (int i = 0; i < len / 2; i++)
        {
            int index = s[i] - 'a';
            left[index]++;
        }
        // Agle waale mein (len+1)/2 use kar rhe hai kyonki if len odd hua toh ek element skip ho jaega
        for (int i = (len + 1) / 2; i < len; i++)
        {
            int index = s[i] - 'a';
            right[index]++;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            if (left[i] != right[i])
                ans = 1;
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}