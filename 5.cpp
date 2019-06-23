#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n],b[m*n],t=0;
	double pj[n];
	for(i=0;i<m;i++)
	{
		int max=0,sum=0;
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
			if(a[i][j]>165)
				b[t++]=a[i][j];
			if(a[i][j]>max)
				max=a[i][j];
		}
		cout<<max<<endl;
		pj[i]=double(sum)/n;
	}
	for(i=0;i<m;i++)
		cout<<int(pj[i]+0.5)<<endl;
	sort(b,b+t,greater<int>());
	for(i=0;i<t;i++)
		cout<<b[i]<<" "; 
	return 0;
}

