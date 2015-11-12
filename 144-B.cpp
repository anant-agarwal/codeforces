#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	long  xa,ya,xb,yb;
	cin>>xa>>ya>>xb>>yb;
	int n;
	cin>>n;
	long arr[1000][3];
	//long arr[1010][4];	
	for(int i=0;i<n;i++)
	{
		scanf("%ld%ld%ld",&arr[i][0],&arr[i][1],&arr[i][2]);
	}
	long sx,lx,sxy,lxy;
	if(xa<xb)
	{
		sx=xa;sxy=ya;lx=xb;lxy=yb;
	}
	else
	{
		sx=xb;sxy=yb;lx=xa;lxy=ya;
	}
	int count=0;
	for(int i=sx;i<=lx;i++)
	{	
		int f1=0,f2=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j][2]*arr[j][2] >= (i-arr[j][0])*(i-arr[j][0])+(sxy-arr[j][1])*(sxy-arr[j][1]))
			{
				//cout<<i<<" "<<sxy<<" "<<arr[j][2]*arr[j][2]<<" "<<(i-arr[j][0])*(i-arr[j][0])+(sxy-arr[j][1])*(sxy-arr[j][1])<<"\n";
				f1=1;	
			}
			if(arr[j][2]*arr[j][2] >= (i-arr[j][0])*(i-arr[j][0])+(lxy-arr[j][1])*(lxy-arr[j][1]))
			{
				//cout<<i<<" "<<lxy<<" "<<arr[j][3]*arr[j][3]<<" "<< (i-arr[j][0])*(i-arr[j][0])+(lxy-arr[j][1])*(lxy-arr[j][1])<<"\n";
				f2=1;	
			}
			if(f1==1 && f2==1)
			break;
		}
		if(f1==0)
		count++;
		if(f2==0)
		count++;
	}
	if(ya<yb)
	{
		sx=xa;sxy=ya;lx=xb;lxy=yb;
	}
	else
	{
		sx=xb;sxy=yb;lx=xa;lxy=ya;
	}
	for(int i=sxy+1;i<lxy;i++)
	{	
		int f1=0,f2=0;
		for(int j=0;j<n;j++)
		{
			//if(i==3)
			//cout<<sx<<" "<<arr[j][2]*arr[j][2]<<" "<<(i-arr[j][1])*(i-arr[j][1])+(sx-arr[j][0])*(sx-arr[j][0])<<"\n";
			if(arr[j][2]*arr[j][2] >= (i-arr[j][1])*(i-arr[j][1])+(sx-arr[j][0])*(sx-arr[j][0]))
			{
				//cout<<sx<<" "<<i<<" "<<arr[j][2]*arr[j][2]<<" "<<(i-arr[j][1])*(i-arr[j][1])+(sx-arr[j][0])*(sx-arr[j][0])<<"\n";
				f1=1;	
			}
			if(arr[j][2]*arr[j][2] >= (i-arr[j][1])*(i-arr[j][1])+(lx-arr[j][0])*(lx-arr[j][0]))
			{
				//cout<<lx<<" "<<i<<" "<<arr[j][2]*arr[j][2] <<" "<<(i-arr[j][1])*(i-arr[j][1])+(lx-arr[j][0])*(lx-arr[j][0])<<"\n";
				f2=1;	
			}
			if(f1==1 && f2==1)
			break;
		}
		if(f1==0)
		count++;
		if(f2==0)
		count++;
	}
	cout<<count;
}