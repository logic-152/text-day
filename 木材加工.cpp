#include <iostream>
using namespace std;

int n, k, l = 0, r = 100000001; // l����С���ܳ��ȣ�r�������ܳ���
int a[100005];

// �жϵ�ǰ����x�Ƿ��������ָ������k��
bool pin(int x) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += a[i] / x; // �ۼ�ÿ��Ԫ���ָܷ���Ķ���
	}
	return num >= k;
}

int main() {
	ios::sync_with_stdio(false); // �����������Ч��
	cin.tie(nullptr);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	int ans = 0; // �������ս��
	while (l <= r) {
		int mid = l + (r - l) / 2; // ��ֹ���
		if (pin(mid)) {
			ans = mid; // ���´�
			l = mid + 1; // ���Ը���ĳ���
		} else {
			r = mid - 1; // ���Ը�С�ĳ���
		}
	}

	cout <<  ans << endl;
	return 0;
}
