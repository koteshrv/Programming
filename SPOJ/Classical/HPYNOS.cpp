#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int count = 0;
    while(1) {
        if(n == 1) {
            cout << count << endl;
            break;
        }

        int ans = 0;
        while(n > 0) {
            ans += (n % 10) * (n % 10);
            n /= 10;
        }

        n = ans;
        count++;
        
        if(n == 4) {
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}