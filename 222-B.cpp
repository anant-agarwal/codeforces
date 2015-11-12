#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<map>
using namespace std;
int main()
{
	long n,m,k;
	cin>>n>>m>>k;
	map<long,long>row;
	map<long,long>col;

	long arr[1000][1000];
	for(long i=0;i<n;i++)
	{
		row[i]=i+1;
		
		for(long j=0;j<m;j++)
		{
			col[j]=j+1;
			long x;
			scanf("%ld",&x);
			arr[i][j]=x;
		}
	}
	for(long i=0;i<k;i++)
	{
		char a;long b,c;
		cin>>a>>b>>c; 
		if(a=='r')
		{
			long tmp=row[b-1];
			row[b-1]=row[c-1];
			row[c-1]=tmp;
		}
		else if(a=='c')
		{
			long tmp=col[b-1];
			col[b-1]=col[c-1];
			col[c-1]=tmp;
		}
		else 
		cout<<arr[row[b-1]-1][col[c-1]-1]<<"\n";				
	}
}