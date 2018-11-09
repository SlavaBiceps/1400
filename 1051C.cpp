#include<bits/stdc++.h>
using namespace std;
int n,a[120005];
map <long long,int>st;
int main() {
	cin>>n;
	for(int i=0; i<n; i++)cin>>a[i],st[a[i]]++;
	for(int i=0; i<n; i++) {
		for(long long j=1LL; j<=lim; j<<=1) {
			int s=st[j-a[i]];
			if(s-(j==2*a[i])>0) {
				ans++;
				break;
			}
		}
	}
	cout<<n-ans<<endl;
	return 0;
}