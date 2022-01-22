//Sort an array of 0s, 1s and 2s

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int low=0,mid=0,high=n-1;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	while(mid<=high)
	{
			if(arr[mid]==0)
			{
			swap(arr[mid++],arr[low++]);
			}
			else if(arr[mid]==1)
			{
			mid++;
			}
			else if(arr[mid]==2)
			{
			swap(arr[mid],arr[high--]);
			}
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i];
	}
	
}
