#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        for(int i = 1; i < n;i++) {
            if(s[i]=='G'&&s[i-1]=='B') {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
