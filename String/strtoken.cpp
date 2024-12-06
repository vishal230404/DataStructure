#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using ll = long long ;
using namespace std;
void solve() {
    char a[100] = "Today is a rainy day";
    char *ptr = strtok(a, " ");
    cout << ptr << endl;
    while (ptr != NULL) {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
    solve();


    return 0;
}
