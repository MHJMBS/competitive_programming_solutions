#include "bits/stdc++.h"

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        cout << s;
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
}
