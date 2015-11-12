#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	long n;
	cin>>n;
	long c1=0,c2=0,c3=0,c4=0;
	for(long i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x==1)c1++;
		if(x==2)c2++;
		if(x==3)c3++;
		if(x==4)c4++;
	}
	long res=c4;
	if(c1>=c3){c1-=c3;res+=c3;c3=0;}
	else
	{
		res+=c3;c3=0;c1=0;
	}
	if(c2%2==0){res+=c2/2;c2=0;}
	else
	{
		res+=c2/2;c2=1;
		if(c1==1 || c1==2 || c1==0)
		{
			res+=1;
			c1=0;c2=0;
		}
		else if(c1>2)
		{
			res+=1;
			c1-=2;c2=0;
		}
	}
	if(c1>0)
	{
		if(c1%4==0)res+=c1/4;
		else
		{res+=c1/4;res++;}
	}
	cout<<res;	
}