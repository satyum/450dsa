//Union of two arrays 
    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    	set<int>s;
    	int n;
    	cin>>n;
    	int m;
    	cin>>m;
    	for(int i=0;i<n;i++)
    	{   int x;
    		cin>>x;
    		s.insert(x);
     
    	}
    	for(int j=0;j<m;++j)
    	{
			int y;
			cin>>y;
			s.insert(y);
		}
    	cout<<s.size();
    }
