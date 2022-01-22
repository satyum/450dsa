//Minimize the Heights II 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n;
	cin>k;
	int arr[n];
	for(int i=0;i<n;++i)
	{
			cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int ans=arr[n-1]-arr[0];
	for(int i=0;i<n;++i)
	{
			int a =arr[i],b=arr[i+1];
			int high=max(arr[n-1]-k,a+k);
			int low=min(arr[0]+k,b-k);
			ans =min(ans,high-low);
	}
	return ans;
}
