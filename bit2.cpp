#include<iostream>
using namespace std;
int binarynumber(int n)
{
	int counter=0;
	while(n!=0)
	{
		n=n & n-1;
		counter++;
	}
	return counter;
}
int main()
{
	cout<<binarynumber(19)<<endl;
}
