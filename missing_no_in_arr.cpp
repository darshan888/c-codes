#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
		
	}
	int sum=0;
	for(int i=0;i<n-1;i++){
		sum +=arr[i];
		
	}
	int x=n*(n+1)/2;
	cout<<"missing number is "<<endl;
    x=x-sum;
    cout<<x<<endl;
	
}
