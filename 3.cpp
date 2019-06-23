#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	string name[n+5],maxname="root";
	int a[n+5],b[n+5],c[n+5],d[n+5],sum[n+5],summax=-1,smallest,biggest;
	for(i=0;i<n;i++)
	{
		cin>>name[i]>>a[i]>>b[i]>>c[i]>>d[i];
		sum[i]=a[i]+b[i]+c[i]+d[i];
		cout<<sum[i]<<endl;
		if(sum[i]>summax)
			summax=sum[i],maxname=name[i];
	} 	
	cout<<maxname<<endl;
	sort(a,a+n);
	sort(b,b+n);
	sort(c,c+n);
	sort(d,d+n);
	int temp[10]={a[0],b[0],c[0],d[0]};
	sort(temp,temp+4);
	smallest=temp[0];
	sort(a,a+n,greater<int>());
	sort(b,b+n,greater<int>());
	sort(c,c+n,greater<int>());
	sort(d,d+n,greater<int>());
	int temp2[10]={a[0],b[0],c[0],d[0]};
	sort(temp2,temp2+4,greater<int>());
	biggest=temp2[0];
	cout<<biggest<<" "<<smallest<<endl;
	return 0;
}

