/*
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
OlD Approach with one TLE
*/

//New Approach without TLE
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
      int n,k;
      cin>>n>>k;
      char s[n];
      for(int i=0;i<n;i++)
      {
          cin>>s[i];
      }
      int ans=0,l=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]== '*')
          {
              ans++;
              if(ans==k)
              {
                  cout<<"YES"<<endl;
                  l++;
                  break;
              }
          }
          else
          ans=0;
      }
      if(l==0)
      cout<<"NO"<<endl;
      
    }
    return 0;
}