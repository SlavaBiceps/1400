#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(&s[0], &s[n]);
    cout << s;
    return 0;
}