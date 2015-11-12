#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
int n,b;
cin>>n>>b;
long sum=0;
vector<int>v;
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	v.push_back(x);
	sum+=x;
}
sum+=b;
double avg=(double)sum/n;
vector<double>ans;
int fl=0;
for(int i=0;i<n;i++)
{
	if(v[i]>avg)
	{
		fl=1;
		break;
	}
	else
	{
		ans.push_back(avg-v[i]);
	}
}
if(fl)cout<<"-1\n";
else
for(int i=0;i<n;i++)
{
	printf("%f\n",ans[i]);
}
}