#include <bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while (test--){
	long long a,b,m,n;
	long long dem=0;
	cin >> m >> n >> a >> b;
	for (int i=m; i<=n; i++){
		if (i%a==0 || i%b==0){
			dem++;
		}
		
	}
	cout << dem<< "\n";
	}
	
}
