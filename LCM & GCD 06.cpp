#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b){
    if(a == 0)
        return b;
    return GCD(b % a, a);
}
int main(){
	int test ;
	cin >> test;
	while (test--){
		long long n, m;
		cin >> n >> m;
		int check=0;
		long long sum= ((n+1))*n/2;
		long long temp;
		if (m>= sum){
			cout << "No"<< "\n";
		} else {
			check=0;
			if ((sum-m)%2 == 0){
				check=1;
				temp=(sum-m)/2;
			}
	int check1=0;
	if (GCD(sum, sum-temp)==1){
		check1=1;
	}
	else (check1==0);
	if (check==0){
		cout << "No" << "\n";
	} else {
		if (check1==1 && check==1) cout << "Yes"<< "\n";
		else cout << "No"<< "\n";
	}
		
	}
}
}
