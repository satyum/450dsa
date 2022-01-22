//Minimum no. of Jumps to reach end of an array
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int count=0;
	int curreach=0;
	int maxreach=0;
	
	for(int i=0;i<n-1;++i)
	{
		maxreach=std::max(maxreach,i+arr[i]);
		if(i==curreach)
		{
			count++;
			curreach=maxreach;
		}
	}
	cout<<count;
	return 0; 
}
