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
	int maxreach=0;
	
	for(int i=0;i<n;++i)
	{
		if(maxreach<i)
		{
		cout<<"false";
		}
		
		maxreach=std::max(maxreach,i+arr[i]);
	}
	cout<<"true";
	

return 0;	
}
