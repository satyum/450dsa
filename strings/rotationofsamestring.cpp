#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	if(s1.size()!=s2.size())
		{
			cout <<"nope";
		}
		
		string temp= s1+s1;
		if(temp.find(s2)!=string::npos)
		{
		cout<<"it is rotation of same string";
		}
		else{
			cout<<"no";
			}
		
	return 0;
}
