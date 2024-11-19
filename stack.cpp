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
			a=x.top(); //a为 *前面的数
			x.pop(); //删除 *前面的数，为把乘完的数压入栈做准备
			x.push(a*b%10000);	
		}
		else //+ 的情况
		x.push(b);
	}
	int sum=0;
	//留在栈的数只剩相加的
	while(x.size())
	{
		sum+=x.top();//每次加栈顶的值
		sum%=1000;
		x.pop();//删除栈顶的值；
	}
	cout<<sum<<endl;
	
	return 0;
}
