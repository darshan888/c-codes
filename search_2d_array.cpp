#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Matrix is "<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"searching in matrix"<<endl;
	int key;
	cin>>key;
	
	bool flag=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==key){
				cout<<i<<" "<<j<<endl;
				flag=true;
			}
			else{
				flag=false;
			}
			
		}
		
	}
	if(flag==true){
		cout<<"key found "<<endl;
		
	}
	else{
		cout<<"key not found"<<endl;
	}
	
}
