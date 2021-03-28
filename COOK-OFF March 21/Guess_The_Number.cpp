#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;
cin>>t;
while(t--)
{   
for(int i = 0;i<1000;i++)
{
    cout<<(i*i)<<endl;
    int ans;
    cin>>ans;
    if(ans==1) goto end;
}
end:
continue;
}
    return 0;
}