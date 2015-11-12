#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	long n,k;
	cin>>n>>k;
	vector<long>v;
	for(long i=0;i<n;i++)
	{
		long x;
		scanf("%ld",&x);
		v.push_back(x);
	}
	long tmp=v[k-1],flag=0;
	for(long i=k;i<n;i++)
	{
		if(tmp!=v[i])
		{flag=1;break;}		
		
	}
	long pos=-1;
	for(long i=k-2;i>=0;i--)
	{
		if(v[i]==v[k-1])pos=i;
		else
		break;
	}
	
	if(flag)cout<<"-1\n";
	else 
	if(pos==-1)
	cout<<k-1<<"\n";
	else
	cout<<pos<<"\n";
}