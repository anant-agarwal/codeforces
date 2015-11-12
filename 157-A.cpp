#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			long rsum=0,colsum=0;
			for(int k=0;k<n;k++)
			{
				rsum+=arr[i][k];
				colsum+=arr[k][j];
			}
			if(colsum>rsum)count++;
		}
	}
	cout<<count;
}