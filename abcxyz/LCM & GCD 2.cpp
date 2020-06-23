#include <bits/stdc++.h>
using namespace std;
long long ucln (long long a, long long b) {
    while (b!=0) {
        long long x = a%b;
        a = b;
        b = x;
    }
    return a;
}
 
long long bcnn (long long a, long long b) {
    long long x = ucln (a, b);
    return (a*b)/x;
}
 
int main () {
	int test;
	cin >> test;
	while (test--){
		long long n; 
		cin >> n;
		long long result=1;
		for (int i=1; i<=n; i++){
			result= bcnn(result,i);
		}
		cout << result << "\n";
	}
	return 0;
}
