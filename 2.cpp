#include <iostream>
#include <iomanip>
using namespace std;
struct buy
{
	string name;
	int notebook,pencil,eraser,ballpen;
	long double price;
};
int main()
{
	//�ʼǱ�ÿ��2Ԫ��Ǧ��ÿ֧0.5Ԫ����Ƥÿ��0.8Ԫ��Բ���ÿ֧2.5Ԫ��
	int n,i;
	cin>>n;
	struct buy a[n+5];
	long double pj=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].notebook>>a[i].pencil>>a[i].eraser>>a[i].ballpen;
		a[i].price=a[i].notebook*2+a[i].pencil*0.5+a[i].eraser*0.8+a[i].ballpen*2.5;
		cout<<a[i].price<<endl;
		pj+=a[i].price;
	}
	pj/=n;
	cout<<double(int(pj*100+0.5))/100<<endl;
	for(i=0;i<n;i++)
		if(a[i].price<pj)
			cout<<a[i].name<<endl;
	
	
	return 0;
}

