#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	int arr[26]={0};
	int qwe[26]={0};
	for(long i=0;i<a.size();i++)
	{
		arr[a[i]-65]++;
	}
	for(long i=0;i<b.size();i++)
	{
		arr[b[i]-65]++;
	}
	for(long i=0;i<c.size();i++)
	{
		arr[c[i]-65]--;
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{flag=1;break;}
	}
	if(flag)
	cout<<"NO";
	else
	cout<<"YES";	
}