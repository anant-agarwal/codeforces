#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;
int main()
{

	long n,m,c;
	cin>>n>>m>>c;
	vector< vector<pair<long ,long> > >adj;	
	pair<long,long>p;	
	
	adj.resize(n+1);
	bool done[100001]={0};
	long final[100001]={0};
	 vector<long>edge[3];
	for(long i=0;i<m;i++)
	{
		long w,q,r;
		scanf("%ld%ld%ld",&w,&q,&r);
		p.first=r;p.second=q;
		adj[w].push_back(p);
		p.second=w;
		adj[q].push_back(p);
		edge[0].push_back(w);
		edge[1].push_back(q);
		edge[2].push_back(r);	
	}
	set<pair<long ,long> >s;
	p.first=0;p.second=c;
	s.insert(p);
	while(!s.empty())
	{
		p=*(s.begin());
		s.erase(s.begin());
		if(!done[p.second])
		{
			done[p.second]=1;
			final[p.second]=p.first;
		}		
		for(long i=0;i<adj[p.second].size();i++)
		{
			if(done[adj[p.second][i].second]==0)
			{
				adj[p.second][i].first=adj[p.second][i].first+final[p.second];
				s.insert(adj[p.second][i]);
			}
		}
	}
	long l;
	cin>>l;
	long count=0;
	for(long i=1;i<=n;i++)
	{
		//cout<<final[i]<<" ";
		if(final[i]==l)
		count++;
	}
	
	for(long i=0;i<m;i++)
	{
		//cout<<i<<"\n";
		if(l>final[edge[0][i]])
		{
			if(edge[2][i]-(l-final[edge[0][i]])>0 && final[edge[1][i]]+edge[2][i]-(l-final[edge[0][i]])>=l)
			{
				//cout<<edge[2][i]<<" "<<(l-final[edge[0][i]]);
				//cout<<"on1 "<<edge[0][i]<<" "<<edge[1][i]<<"\n";
				count++;
			}
		}
		if(l>final[edge[1][i]])
		{
			if(edge[2][i]-(l-final[edge[1][i]])>0 && final[edge[0][i]]+edge[2][i]-(l-final[edge[1][i]])>l)
			{
				//cout<<"on "<<edge[1][i]<<" "<<edge[0][i]<<"\n";
				count++;
			}
		}
	}
	cout<<count;
}