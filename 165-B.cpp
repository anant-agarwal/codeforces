#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	long n;int k;
	cin>>n>>k;
	long lo=1,hi=n,ans;
	while(lo<=hi)
	{
		long mid=(lo+hi)/2;
		long tmp=mid,sum=tmp;		
		while(tmp!=0 && sum<n)
		{
			tmp=tmp/k;
			sum+=tmp;		
		}
		if(sum>=n)
		{
			hi=mid-1;
			ans=mid;
		}
		else
		lo=mid+1;
	}
	cout<<ans<<"\n";
	
}