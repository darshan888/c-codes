#include<iostream>
using namespace std;

int isPoweroftwo(int n)
{
	return (n && !(n & n-1));
}
int main()
{
	cout<<isPoweroftwo(6)<<endl;
}
