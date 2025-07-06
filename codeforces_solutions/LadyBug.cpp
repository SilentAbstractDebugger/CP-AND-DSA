#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '0') c1++;
            if (b[i] == '0') c2++;
        } else {
            if (a[i] == '0') c2++;
            if (b[i] == '0') c1++;
        }
    }

    if (c1 >= (n + 1) / 2 && c2 >= n / 2) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
