#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int split(string s,vector<string>&v)
{
	v.clear();
	int len=s.size();
	//cout<<"len:"<<len<<"\n";
	for(int i=0;i<len;i++)
	{
		string c="";
		while(i<len && s[i]!='/')
		{
			c+=s[i];
			i++;
		}
		//cout<<c<<" ";	
		if(c=="" && i==0)
		v.push_back("/");
		else
		v.push_back(c);
		
	}
}
int main()
{
	int n;
	cin>>n;
	vector<string>pwd;int pointer=1;
	pwd.push_back("/");	
	for(int i=0;i<n;i++)
	{
		string x;
		cin>>x;
		//cout<<s;
		if(x[0]=='c')
		{
			string s;
			cin>>s;
			vector<string>v;
			 split(s,v);
			///cout<<v.size();
			if(v[0]=="/")pointer=0;
			for(int j=0;j<v.size();j++)
			{
				if(v[j]=="..")
					pointer--;
				else
				if(pointer<pwd.size())
				{
					pwd[pointer]=v[j];
					pointer++;
				}
				else
				{	pwd.push_back(v[j]);
					pointer++;
				}
			}
			//cout<<"hi\n";
		}
		else
		{
			cout<<"/";
			for(int j=1;j<pointer;j++)
			{
				cout<<pwd[j]<<"/";
			}
			cout<<"\n";
		}
	}
}