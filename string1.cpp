#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
	//string str;
	//getline(cin,str);
	//cout<<str<<endl;
	
	//append the strings
	//string s1="darsh";
	//string s2="an";
	//s1.append(s2);
	//cout<<s1<<endl;
	
	//access difft char at difft index
	//cout<<s1.at(2)<<endl;
	
	//compare two strings
	//string s1="hey";
	//string s2="heyo";
	//cout<<s1.compare(s2)<<endl;
	
	//erase the character from particular index
	string s1="saidarshan";
	//s1.erase(3,3);
	//cout<<s1<<endl;

    //find  particular element.
	//cout<<	s1.find("dar")<<endl;
	
	//insert at any index
	//cout<<s1.insert(10,"da")<<endl;
	
	//find lenghth of the string
	//cout<<s1.length()<<endl;
	
	
	//convert string to integer
	//string s2 = "786";
	//stringstream geek(s2);
	//int x;
	//geek>>x;
	
	//cout<<x+2<<endl;
	
	//sort
	string s3="nsjbbhvsbazxxzmhgsa";
	
	sort(s3.begin() , s3.end());
	cout<<s3<<endl;
	
}
