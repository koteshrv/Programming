#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        int count = 0; 
        while(n != 0) {
            n = n & (n << 1);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
