#include <iostream>
#include <string>
using namespace std;
struct road
{
	double v,t,s;
	string n;
};
int main()
{
	int n,i;
	cin>>n;
	long double s=0,t=0;
	string name;
	int num=0; 
	struct road a[n+5];
	for(i=0;i<n;i++)
	{
		cin>>a[i].v>>a[i].t>>a[i].n;
		a[i].s=a[i].v*a[i].t;
		s+=a[i].s;
		t+=a[i].t;
	}
	name=a[0].n;
	for(i=1;i<n;i++)
	{
		if(a[num].s>a[i].s)
			name=a[i].n,num=i;
	}
	cout<<s<<endl<<t<<endl<<name<<endl;
	return 0;
}

