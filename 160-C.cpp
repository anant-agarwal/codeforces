#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	//cout<<n<<" "<<k;
	vector<long long>v;
	for(long i=0;i<n;i++)
	{
		long long x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long q=(k-1)/n;
	long count=0,start=-1;
	for(long i=0;i<n;i++)
	{
		if(v[i]==v[q])
		{
			count++;
			if(start==-1)
				start=i;
		}
	}
	long long remaining=k-1-(n*start-1);
	long long t=(remaining-1)/count;
	
	//long long r=k-1-n*q;
	cout<<v[q]<<" "<<v[t];
	
}