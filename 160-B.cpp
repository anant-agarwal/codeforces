#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<char>v1,v2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char ch;
		//scanf("%c",&ch);
		cin>>ch;		
		v1.push_back(ch);
		//cout<<v1[i]<<" ";
	}
	//cout<<"\n";
	for(int i=0;i<n;i++)
	{
		char ch;
		//scanf("%c",&ch);
		cin>>ch;		
		v2.push_back(ch);
		//cout<<v2[i]<<"\n";
	}

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int flag=0;	
	if(v1[0]<v2[0])
	{
		
		for(int i=1;i<n;i++)
		{
			if(v1[i]>=v2[i])
			{flag=1;break;}	
			//cout<<v1[i]<<" "<<v2[i]<<"\n";
		
		}
	}
	else if(v1[0]>v2[0])
	{
		for(int i=1;i<n;i++)
		{
			if(v1[i]<=v2[i])
			{flag=1;break;}			
			//cout<<v1[i]<<"-"<<v2[i]<<"\n";
		}
		

	}
	else flag=1;
	
	if(flag)cout<<"NO\n";
	else cout<<"YES\n";

}