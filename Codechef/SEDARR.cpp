#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0, a;
        for(int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }
        if(sum % k == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }

    return 0;
}