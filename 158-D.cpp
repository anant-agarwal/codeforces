#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	long long max=-20000000;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i!=0)continue;
		if(n/i>=3)
		for(int start=1;start<=i;start++)
		{
			long long sum=0;
			for(int j=start;j<=n;j=j+i)
			{
				sum+=arr[j];
			}
			if(sum>max)
			{
				max=sum;
				//cout<<i<<"\n";
			}	
		}
		int second=n/i;
		if(i>=3)
		for(int start=1;start<=second;start++)
		{
			long long sum=0;
			for(int j=start;j<=n;j=j+second)
			{
				sum+=arr[j];
			}
			if(sum>=max)
			{	
				max=sum;
				//cout<<second<<"\n";
			}	
		}

	}
	cout<<max;
}