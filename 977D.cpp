#include <bits/stdc++.h>
using namespace std;

long long count3(long long a) {
    long long res = 0;
    while (a % 3 == 0) {
	res++;
	a /= 3;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n);
    for (ll i = 0; i < n; i++) {
	cin >> a[i].second;
	a[i].first = -count3(a[i].second);
    }
    sort(a.begin(), a.end());
    for (long long i = 0; i < n; i++) {
	cout << a[i].second << ' ';
    }
    cout << endl;
}