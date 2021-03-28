#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
int t;
cin>>t;
while (t--)
{
    string str;
    cin>>str;
   // string str2 ("party");
    for(int i=0;i+4<str.length();i++)
    {
     if( str.substr(i,5) == "party")
    { str[i+2]='w';
     str[i+3]='r';
     str[i+4]='i';
    }
    }
  // int found = str.find(str2);
 /*   
  if (found!=string::npos)
  {
  str.replace(str.find(str2),str2.length(),"pawri");
  }
  */
  cout << str << '\n';
  
}

    return 0;
}