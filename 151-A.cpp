#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x=(k*l)/nl;
	if(x>p/np)
	x=p/np;
	if(x > c*d)
	x=c*d;
	cout<<x/n;
}