#include <iostream>
using namespace std;

int n, k, l = 0, r = 100000001; // l是最小可能长度，r是最大可能长度
int a[100005];

// 判断当前长度x是否可以满足分割出至少k段
bool pin(int x) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += a[i] / x; // 累加每个元素能分割出的段数
	}
	return num >= k;
}

int main() {
	ios::sync_with_stdio(false); // 提升输入输出效率
	cin.tie(nullptr);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	int ans = 0; // 保存最终结果
	while (l+1 <r) {
		int mid = l + (r - l) / 2; // 防止溢出
		if (pin(mid)) {
			ans = mid; // 更新答案
			l = mid ; // 尝试更大的长度
		} else {
			r = mid ; // 尝试更小的长度
		}
	}

	cout <<  ans << endl;
	return 0;
}
