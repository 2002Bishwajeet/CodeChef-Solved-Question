#include <iostream>
using namespace std;

int main() {
 int tcase;
 cin>>tcase;
 int a1[tcase];
    for(int i=0;i<tcase;i++)
    {
        int num;
        cin>>num;
        int sum=0;
        while(num!=0)
       { 
        sum=sum*10+ (num%10);
        num=num/10;
       }
       a1[i]=sum;
        
    }
    for(int i=0;i<tcase;i++)
    cout<<a1[i]<<endl;
	return 0;
}
