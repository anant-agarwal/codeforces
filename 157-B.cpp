#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{	
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long total=0;	
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		total+=v[n-1-i]*v[n-1-i];
		else
		total-=v[n-1-i]*v[n-1-i];
	}
	cout<<3.141592653589793*(double)total;
}