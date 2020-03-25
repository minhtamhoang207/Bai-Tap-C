#include <bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while (test--){
	long long n,k ;
	cin >> n >> k;
	long long sum=0;
	for (int i=1; i<=n; i++){
		if (n<k){
			sum+=i;
		}
		else{
		sum+=i%k;}
	}
	cout << sum << "\n";
	}
	
}
