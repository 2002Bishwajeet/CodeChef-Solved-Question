#include <iostream>
using namespace std;

int main()
{
	int count, test;
	cin>>test;
	if(test<=10)
    {
		while(test--)
        {
            int m,n,k;
		cin>>n>>m>>k;
        int arr[n][m];
		if(n<=m){
			
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>arr[i][j];
			}
		}
		
			for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout<<arr[i][j]<<" ";
			}cout<<endl;
		}
	/*for(int a= 0 ; a<n-1; a++){
		for(int b=0 ; b<m-1; b++){
			for(int c= 0; c<n-1; c++){
				for(int d=0; d<m-1; d++){
					cout<<arr[a+c][b+d]<<" ";
				}cout<<endl;
			}
		}
	}*/
			
	/*	for(int e= 0 ; e< n-2; e++){
			for(int a= 0 ; a<n-e; a++){
				for(int b=0 ; b<m; b++){
					for(int c= 0; c<(n-1)+e; c++){
						for(int d=0; d<(m-1)+e; d++){
							cout<<arr[a+c][b+d]<<" ";
						}cout<<endl;
					}cout<<endl;
				}
			}	
		}*/
			
		}
	}	
	}

    return 0;
	
}