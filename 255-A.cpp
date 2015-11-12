#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int>v;
	int c=0,bi=0,bc=0;
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		if(i%3==0)c+=tmp;
		else if(i%3==1)bi+=tmp;
		else if(i%3==2)bc+=tmp;
	}
	int pos=0,max=c;
	if(max<bi){max=bi,pos=1;}
	if(max<bc){max=bc,pos=2;}
	if(pos==0)
	printf("chest\n");
	else if(pos==1)printf("biceps\n");
	else if(pos==2)printf("back\n");
	
}