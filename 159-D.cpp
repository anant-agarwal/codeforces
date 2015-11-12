#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	long long start[2001]={0},end[2001]={0};
	for(int i=0;i<len;i++)
	{
		//for(int j=i;j<len;j++)
		//{
			int p=i,q=i;
			while(p>=0 && q<len)
			{
				if(s[p]==s[q])
				{
					start[p]++;
					end[q]++;
					p--;
					q++;
				}
				else 
				{
					break;
				}
			}
		/*	if(p==i-1)
			{	
				cout<<"palindrome:"<<i<<" "<<q-1<<"\n";
				start[i]++;
				end[q-1]++;
			}
		*/
		 	p=i,q=i+1;
			while(p>=0 && q<len)
			{
				if(s[p]==s[q])
				{
					start[p]++;
					end[q]++;
					p--;
					q++;
				}
				else
					break;
			}	
			/*if(p==i-1)
			{
				cout<<"palindrome:"<<i<<" "<<q-1<<"\n";

				start[i]++;
				end[q-1]++;
			}*/
		//}
	}
	for(int i=len-2;i>=0;i--)
	{
		start[i]+=start[i+1];
	}
	long long ans=0;
	for(int i=0;i<len-1;i++)
	{
		ans+=end[i]*start[i+1];
	}
	cout<<ans;
}