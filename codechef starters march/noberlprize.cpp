#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_duplicate_elements(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
if (arr[i] != arr[i+1])
temp[j++] = arr[i];
temp[j++] = arr[n-1];

for (i=0; i<j; i++)
arr[i] = temp[i];

return j;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int flag = 0;
        sort(ar, ar + n);
        
        if(n>=m)
        { n = remove_duplicate_elements(ar,n);
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) != ar[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
        }
        else if(n<m)
        cout<<"Yes"<<endl;
    }
    return 0;
}