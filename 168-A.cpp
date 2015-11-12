#include<iostream>
#include<cmath>
using namespace std;
int main()
{double n,x,y;
 int m;
 cin>>n>>x>>y;

 m=ceil((y*n)/100)-x;
if(m>0)
 cout<<m;
else cout<<'0';
}