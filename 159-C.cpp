#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	int len=s.size();
	int count[26]={0};
	for(int i=0;i<len;i++)
	{
		count[s[i]-'a']++;
	}
	string res[k];
	int arr[k][26];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<26;j++)
		{
			arr[i][j]=count[j];
			//cout<<arr[i][j]<<" ";
		}
		//cout<<"\n";
		res[i]=s;
	}
	
	long n;cin>>n;
	for(long q=0;q<n;q++)
	{
		long x;char c;
		scanf("%ld %c",&x,&c);
		int pos=-1;
		for(int i=0;i<k;i++)
		{
			if(x>arr[i][c-'a'])
			{
				//cout<<"x is "<<x<<" and arr[i][c-'a'] is "<<arr[i][c-'a']<<"\n";
				x-=arr[i][c-'a'];
				
			}
			else 
			{
				arr[i][c-'a']--;
				pos=i;	
				break;
			}
		}
		//cout<<pos<<"\n";
		int count=0;
		for(int i=0;i<res[pos].size();i++)
		{
			if(res[pos][i]==c)count++;
			if(count==x)
			{
				//cout<<"removing "<<c<<" from "<<pos<<" at "<<i<<"\n";
				string tmp=res[pos];
				res[pos]=tmp.substr(0,i)+tmp.substr(i+1);
				break;
			}
		}				
	}
	for(int i=0;i<k;i++)cout<<res[i];
}