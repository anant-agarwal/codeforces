#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <cmath>
#include <climits>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cctype>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

#define REP(i,n)      FOR(i,0,n)
#define FOR(i,a,b)    for(int i = a; i < b; i++)
#define ROF(i,a,b)    for(int i=a;i>b;i--)
#define GI 		      ({int t;scanf("%d",&t);t;})
#define GL 		      ({LL t;cin>>t;t;})
#define GD 		      ({double t;scanf("%lf",&t);t;})
#define pb 	          push_back
#define mp 	          make_pair
#define MOD 	      1000000007
#define INF	          (int)1e8
#define EPS	          1e-9
#define TR(a,it)      for(typeof((a).begin()) it = (a).begin(); it!=(a).end(); ++it)
int main()
{
	long long n  = GL;
	int count =0;
	FOR(i,0,n)
	{
		string s;
		cin>>s;		
		if( s[ 0] == '+' || s[2] =='+') count++;
		else count--;
	};	
	cout<<count;
	return 0;
}