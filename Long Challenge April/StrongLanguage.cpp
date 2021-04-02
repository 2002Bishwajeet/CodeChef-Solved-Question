#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        //initialize a string with k size and * in every of them
        string str(k,'*');
        int flag = 0;
     

        for (int i = 0; i < n; i++)
        {   
                if (s.substr(i, k) == str)
                {
                   
                   flag = 1;
                    break;
                }
            
        }
     if (flag == 0)
            cout << "NO" << endl;
    else
      cout<<"Yes"<<endl;
    }
    return 0;
}