//find Largest sum contiguous Subarray
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	vector<ll>val(n);
	for(int i=0;i<n;++i)
	{
		cin>>val[i];
	}
	ll best=-1e18;
	ll past=0;
	
	for(int i=0;i<n;++i)
	{
		if(past+val[i]>=val[i])
		{
			past+=val[i];
		}
		else
		{
			past=val[i];
			
		}
	best=max(best,past);
	}
	cout<<best;
	
}
