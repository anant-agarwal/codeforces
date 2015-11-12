#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long a,x,y;
	cin>>a>>x>>y;
	long res;
	double h=a/2;
	if(y>a)
	{
		y=y-a;
		if(y%a==0)
		res=-1;
		else
		{
			long q=y/a+1;
			if(q%2==0 )
			{
				if(x<a && x>-a && x!=0)
				{
					q--;
					res=(q-1)/2*2+q-(q-1)/2+1;
					if(x>-a && x<0)
					res++;
					else
					res+=2;

				}
				else
				res=-1;
			}
			else
			{
				if(2*x<a && 2*x>-a)
				{res=(q-1)/2*2+q-(q-1)/2+1;}
				else
				res=-1;
			}
			
		}
	}
	else
	{
		if(y==a || y==0)
		res=-1;
		else
		if(y<a)
		{
			if(2*x>-a && 2*x<a)
			{res=1;}
			else
			res=-1;
			
		}
	}
	cout<<res;
}