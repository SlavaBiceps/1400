#include <bits/stdc++.h>

using namespace std;



int main() {
    int queue[500000];
    int position[500000];
    int L, R;
    int q;
    cin >> q;
    char c; 
    int id;
    L=250000;
    R=250000;
    while(q--) {
        cin >> c >> id;
        if(c == 'L') position[id] = --L;
        else if(c == 'R') position[id] = R++;
        else cout << min(position[id]-L+1, R-position[id])-1 << '\n';
    }
}