#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        sort(ar, ar + n);
        int ans = 1;
        for(int i = 0; i < n; i++) {
            if(ar[i] <= ans) ans += ar[i]; 
        } 
        cout << ans << endl;
    }

    return 0;
}