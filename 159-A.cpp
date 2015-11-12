#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<utility>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	vector<string>v[2],r[2];
	map<pair<string,string>,bool>m;
	vector<int>v1;
	string s1,s2;int t;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2>>t;
		v[0].push_back(s1);
		v[1].push_back(s2);
		v1.push_back(t);
	}
	
	for(int i=0;i<n;i++)
	{
		string s1=v[0][i],s2=v[1][i];int t1=v1[i];
		for(int j=i+1;j<n;j++)
		{
			int t2=v1[j];
			if(t2-t1>d)
			break;
			//cout<<t1<<" "<<t2<<"\n";
			
			if(s1==v[1][j] && s2==v[0][j] && t2-t1>0)
			{
				pair<string,string>p,q;
				q.second=p.first=s1;
				q.first=p.second=s2;
				if(!m[p] && !m[q])
				{
					r[0].push_back(s1);
					r[1].push_back(s2);
					m[p]=1;
				}
			}
		}
	}
	int r_len=r[0].size();
	cout<<r_len<<"\n";
	for(int i=0;i<r_len;i++)
	{
		cout<<r[0][i]<<" "<<r[1][i]<<"\n";
	}
}