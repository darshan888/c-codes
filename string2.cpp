#include<iostream>
#include<algorithm>
#include<string>
#include <cstring>
using namespace std;
int main()
{
	string str="dkjnsbakkan";
	
	//uppercase
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a' && str[i]<='z'){
			str[i] -=32;
		}
	}
	cout<<str<<endl;
	
	//lower case
	string str1="HBHBABBDNJSAKMX";
	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]>='A' && str1[i]<='Z'){
			str1[i] +=32;
		}
	}
	cout<<str1<<endl;
	
	string str3="hhsbhb";
	transform(str3.begin(),str3.end(),str3.begin(), ::toupper);
	cout<<str3<<endl;

}
