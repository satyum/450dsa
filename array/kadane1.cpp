#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
 
int main()
{
	ll n;
	cin>>n;
	int arr[n];
	ll msf=INT_MIN,sum=0;
	for(ll i=0;i<n;++i)
	{
		cin>>arr[i];
		sum+=arr[i];
		sum=max(sum,0ll+arr[i]);
		msf=max(msf,sum);
		
		
	}
	cout<<msf;	
}
