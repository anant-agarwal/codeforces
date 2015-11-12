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
	int n,k;
	cin>>n>>k;
	vector< pair<long long,int> >stool,pencil;
	long long total=0;	
	for(int i=0;i<n;i++)
	{
		long c,q;
		cin>>c>>q;
		if(q==1)stool.push_back(make_pair(c,i+1));
		else
		pencil.push_back(make_pair(c,i+1));
		total+=c;
	}	
	sort(stool.begin(),stool.end());
	sort(pencil.begin(),pencil.end());
	vector<pair<long long ,int > >ans[k];
	double disc=0;
	
	if(stool.size()<k)
	{
		int j=0;
		for(int i=stool.size()-1;i>=0;i--,j++)
		{
			ans[j].push_back(stool[i]);
			disc+=(double)stool[i].first/2;
			//cout<<disc<<"-1-";
		}
		int i=0;
		for(;j<k;j++,i++)
			ans[j].push_back(pencil[i]);
		for(;i<pencil.size();i++)
		{
			ans[k-1].push_back(pencil[i]);		
		}
	}
	else
	{
		int j=stool.size()-1;
		for(int i=0;i<k;i++,j--)
		{
			ans[i].push_back(stool[j]);
			if(i<k-1)			
			disc+=(double)stool[j].first/2;
			
			//cout<<disc<<" ";
		}
		long long min=-1;
		for(;j>=0;j--)
		{
				
		//int pos=binary(ans,stool[j],k);
			ans[k-1].push_back(stool[j]);
			//if(min> stool[j].first || min==-1)
			//	min=stool[j].first;
		}
		for(int i=0;i<pencil.size();i++)
		{
			ans[k-1].push_back(pencil[i]);
			//if(min> pencil[i].first || min==-1)
			//	min=pencil[i].first;
		}
	
		for(int i=0;i<ans[k-1].size();i++)
		{	
			if(min> ans[k-1][i].first || min==-1)
				min=ans[k-1][i].first;		
		}
		disc+=(double)min/2;
		//cout<<disc<<"-2-";
	}
	//cout<<disc<<"-3-\n";
	printf("%.1f\n",total-disc);
	for(int i=0;i<k;i++)
	{
		cout<<ans[i].size()<<" ";
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j].second<<" ";
		}
		cout<<"\n";
	}
}