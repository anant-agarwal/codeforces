#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v[2];
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v[0].push_back(x);
		v[1].push_back(y);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int l=0,r=0,u=0,d=0;
		for(int j=0;j<n;j++)
		{
			if(v[0][i]<v[0][j] && v[1][i]==v[1][j])
				r++;
			if(v[0][i]>v[0][j] && v[1][i]==v[1][j])
				l++;
			if(v[0][i]==v[0][j] && v[1][i]<v[1][j])
				u++;
			if(v[0][i]==v[0][j] && v[1][i]>v[1][j])
				d++;
		}
		if(r&&l&&d&&u)
			ans++;
	}
	cout<<ans<<"\n";
}