#include <iostream>
using namespace std;

int isPrime(int n){
    if(n<=1)    return 0;
    for(int i = 2; i <= n/2; i++) 
        if(n%i==0)  return 0;
    return 1;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
            if(isPrime(i))  cout << i << endl;
        cout << endl;
    }
	return 0;
}