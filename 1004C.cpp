#include <bits/stdc++.h>

using namespace std;

int added[100000];
int cnt[100000];

int main() {
	int n;
	cin >> n;
	long long ans = 0;
	int add = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		--x;
		int &cur = cnt[x];
		if (cur == 0) {
			added[x] = add;
			ans += add++;
		} else {
			ans += add - added[x];
			added[x] = add;
		}
		++cur;
	}
	cout << ans << endl;
}