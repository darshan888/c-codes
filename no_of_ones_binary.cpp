#include<iostream>
using namespace std;
int nofones(int n)
{
	int count=0;
	while(n)
	{
		n=n & n-1;
		count++;
	}
	return count;
}
int main()
{
	int x;
	cin>>x;
	cout<<nofones(x)<<endl;
}
