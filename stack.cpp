#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	stack<int> x;
	int a,b;
	char c;
	cin>>a;
	x.push(a%10000);
    while(cin>>c>>b)
    {
		if(c=='*')
		{
			a=x.top(); //aΪ *ǰ�����
			x.pop(); //ɾ�� *ǰ�������Ϊ�ѳ������ѹ��ջ��׼��
			x.push(a*b%10000);	
		}
		else //+ �����
		x.push(b);
	}
	int sum=0;
	//����ջ����ֻʣ��ӵ�
	while(x.size())
	{
		sum+=x.top();//ÿ�μ�ջ����ֵ
		sum%=1000;
		x.pop();//ɾ��ջ����ֵ��
	}
	cout<<sum<<endl;
	
	return 0;
}
