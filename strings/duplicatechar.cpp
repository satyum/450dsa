#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;	
	map <char ,int>freq;
	for(auto c:s)
	{
		freq[c]++;
	}
	for(auto x:freq)
	{
		if(x.second>1)
		{
		cout<<x.first;	
		}
	}
}
