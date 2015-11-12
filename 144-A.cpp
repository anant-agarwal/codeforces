#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int min=101,max=0;
	int maxpos=-1,minpos=-1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(min>=arr[i])
		{min=arr[i];minpos=i;}
		if(max<arr[i])
		{
			max=arr[i];maxpos=i;
		}
	}
	int res=maxpos+n-minpos-1;
	if(maxpos>minpos)
	{
		cout<<res-1;
	}
	else
	cout<<res;
}