#include <iostream>
#include <string>
using namespace std;
int main()
{
	int f,n,i,j,m=0;
	double count=0;
	cin>>n;
	int zong[n],a[n],b[n],c[n],d[n];
	string name[n];
	for(i=0;i<n;i++)
	{
		cin>>name[i];
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		zong[i]=a[i]+b[i]+c[i]+d[i];
		count+=zong[i];
	}
	f=int(count/(n*4)+0.5);
	for(i=0;i<n;i++)
		cout<<zong[i]<<endl;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(zong[i]<zong[j])
				swap(zong[i],zong[j]),swap(name[i],name[j]);
	cout<<name[0]<<endl;
	cout<<f<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]>f)
			m++;
		if(b[i]>f)
			m++;
		if(c[i]>f)
			m++;
		if(d[i]>f)
			m++; 
	} 
	cout<<m<<endl; 
}
