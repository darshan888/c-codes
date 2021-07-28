#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"array elements are"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"minimum and maximum in array"<<endl;
	
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i=0;i<n;i++)
	{
		maxNo=max(maxNo,arr[i]);
		minNo=min(minNo,arr[i]);
	}
	
	cout<<"maximum number in array is"<<maxNo<<endl;
	cout<<"Minimum number in array is"<<minNo<<endl;
	
	
	
	return 0;
}
