#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v[3];
	map<int,string>m;
	for(int q=0;q<n;q++)
	{
		int d;string name;
		cin>>d>>name;
		m[q]=name;
		int taxi=0,pizza=0,girl=0;
		for(int j=0;j<d;j++)
		{
			int a,b,c,d,e,f;
			scanf("%d-%d-%d",&a,&c,&e);
			b=a%10;a=a/10;
		
			d=c%10;c/=10;
			f=e%10;e/=10;
			//cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
			if(a==b && b==c && c==d && d==e && e==f)
			taxi++;
			else if(a>b && b>c && c>d && d>e && e>f)
			pizza++;

			else girl++;
						
			
		}
		//cout<<taxi<<pizza<<girl<<"\n";
		v[0].push_back(taxi);
			v[1].push_back(pizza);
			v[2].push_back(girl);
	}
	int t=0,tp=-1,p=0,pp=-1,g=0,pg=-1;
	for(int i=0;i<n;i++)
	{
		
		if(t<=v[0][i])
		{t=v[0][i],tp=i;}
		if(p<=v[1][i])
		{p=v[1][i],pp=i;}
		if(g<=v[2][i])
		{g=v[2][i],pg=i;}
		//cout<<v[0][i]<<v[1][i]<<v[2][i]<<"\n";
	}
	vector<int>res[3];
	for(int i=0;i<n;i++)
	{
		
		if(t==v[0][i])
		{res[0].push_back(i);}
		if(p==v[1][i])
		{res[1].push_back(i);}
		if(g==v[2][i])
		{res[2].push_back(i);}
		//cout<<v[0][i]<<v[1][i]<<v[2][i]<<"\n";
	}
			
	cout<<"If you want to call a taxi, you should call:";
	for(int i=0;i<res[0].size();i++)
	{
		if(i==0)
		cout<<" ";
		else cout<<", ";
		cout<<m[res[0][i]];
	}
	cout<<".\n";
	cout<<"If you want to order a pizza, you should call:";
	for(int i=0;i<res[1].size();i++)
	{
		if(i==0)
		cout<<" ";
		else cout<<", ";
		cout<<m[res[1][i]];
	}
	cout<<".\n";
	cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
	for(int i=0;i<res[2].size();i++)
	{
		if(i==0)
		cout<<" ";
		else cout<<", ";
		cout<<m[res[2][i]];
	}cout<<".\n";
}