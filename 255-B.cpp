#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int p=0,q=0;	
	while(p<s.size() && q<s.size())
	{
		while(p<s.size() && s[p]!='y')
			p++;
		while(q<s.size() && s[q]!='x')
			q++;
		if(p<q && q<s.size())
		{
			s[p++]='x';
			s[q++]='y';
		}
		else 
		{
			p++;q++;
		}
	}
	p=0,q=0;
	while(p<s.size() && q<s.size())
	{
		while(p<s.size() && s[p]!='x')
			p++;
		while(q<s.size() && s[q]!='y')
			q++;
		if(p<q && q<s.size())
		{
			s[p++]='1';
			s[q++]='1';
		}
		else 
		{
			p++;q++;
		}
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='x'||s[i]=='y')printf("%c",s[i]);
	}
	printf("\n");
}