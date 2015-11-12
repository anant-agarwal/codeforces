#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<utility>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	long n,m;
	cin>>n>>m;
	long x,y;
	cin>>x>>y;
	vector<long >man,tshirt;
	for(long i=0;i<n;i++)
	{
		long q;
		cin>>q;
		man.push_back(q);
	}
	for(long i=0;i<m;i++)
	{
		long q;
		cin>>q;
		tshirt.push_back(q);
	}
	vector<long>ans[2];
	long count=0;
	for(long i=0,j=0;i<n && j<m;)
	{
		long man_low=man[i]-x;
		long man_high=man[i]+y;
		if(man_low>tshirt[j])
			j++;
		else if(man_low<=tshirt[j] && man_high>=tshirt[j])
		{
			ans[0].push_back(i+1);
			ans[1].push_back(j+1);
			i++;
			j++;
			count++;
			
		}
		else if(man_high < tshirt[j])
			i++;
		
	}
	cout<<count<<"\n";
	for(long i=0;i<count;i++)
	cout<<ans[0][i]<<" "<<ans[1][i]<<"\n";	
}