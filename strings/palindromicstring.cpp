#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;

	int l=0;
	int r=s.size()-1;
	while(l<r)
	{
		if(s[l]==s[r])
		{
			l++;
			r--;
			
		}
		else
		{
			cout<<"not palindrome";
			break;
			}
			cout<<"palindrome";
	}
	return 0;
}

//different
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;

	int l=0;
	int r=s.size()-1;
	while(l<r)
	{
		if(s[l]!=s[r])
		{
			 cout<<"not palindrome" ;
			break;
		}	
		else{
			cout<<"palindrome";
			}
		l++;
		r--;
	
	}
	
	return 0;
}
