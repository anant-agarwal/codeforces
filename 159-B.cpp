#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
	long n,m;
	cin>>n>>m;
	pair<int,int>pr;
	vector<pair<int,int> >marker,marker1;
	vector<pair<int,int> >cap,cap1;
	
	for(long i=0;i<n;i++)
	{
		cin>>pr.second>>pr.first;
		marker.push_back(pr);
		int tmp=pr.first;
		pr.first=pr.second;
		pr.second=tmp;
		marker1.push_back(pr);		
	}
	for(long i=0;i<m;i++)
	{
		cin>>pr.second>>pr.first;
		cap.push_back(pr);
		int tmp=pr.first;
		pr.first=pr.second;
		pr.second=tmp;
		cap1.push_back(pr);
	}
	sort(marker.begin(),marker.end());
	sort(cap.begin(),cap.end());
	sort(marker1.begin(),marker1.end());
	sort(cap1.begin(),cap1.end());
	
	long tot=0,same=0;
	for(long i=0,k=0;i<m && k<n;)
	{
		if(cap[i].first<marker[k].first)
		i++;
		else if(cap[i].first>marker[k].first)
		k++;
		else
		{
			i++;k++;
			tot++;
		}
	}
	for(long i=0,k=0;i<m && k<n;)
	{
		if(cap[i].first<marker[k].first)
		i++;
		else if(cap[i].first>marker[k].first)
		k++;
		else
		{
			if(cap[i].second<marker[k].second)i++;
			else if(cap[i].second>marker[k].second)k++;
			else{i++;k++;same++;}
		}
	}		
	/*for(long i=0,k=0;i<m && k<n;)
	{
		while(i<m && k<n && cap[i].first!=marker[k].first)
		{
			//cout<<"i came here\n";
			if(cap[i].first<marker[k].first)
			i++;
			else if(cap[i].first>marker[k].first)k++;	
		}
		if(i==m || k==n)continue;

		long prev=cap[i].first;
		long j;		
		for( j=i+1;j<m && prev==cap[j].first;j++)
		{
			//cout<<cap[j].first<<"\n";
		}

		long cap_count=j-i;
		//cout<<"caps of"<<prev<<" "<<cap_count<<"\n";
		prev=marker[k].first;
				
		for( j=k+1;j<n && prev==marker[j].first;j++);
		long marker_count=j-k;
		//cout<<"markers of"<<prev<<" "<<marker_count<<"\n";
		
		tot+=min(marker_count,cap_count);
		long p=0,q=0;		
		while(p+i<m && q+k<n && p<cap_count && q<cap_count)
		{
			if(cap[p+i].second<marker[q+k].second)
				p++;
			else if(cap[p+i].second>marker[q+k].second)
				q++;
			else	
			{
				//cout<<"found same :"<<cap[p+i].first<<" "<<cap[p+i].second<<" "<<marker[q+k].first<<" "<<marker[q+k].second<<"\n";
				same++;p++;q++;
			}
		}	
		i+=cap_count;
		k+=marker_count;			
	}*/	
	cout<<tot<<" "<<same;
}