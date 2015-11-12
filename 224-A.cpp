#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	long a,b,c;
	cin>>a>>b>>c;
	long y=(a*b)/c,x=(a*c)/b,z=(b*c)/a;
	cout<<4*(sqrt(y)+sqrt(x)+sqrt(z));
}