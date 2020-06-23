#include <bits/stdc++.h>
using namespace std;
const int spt = 10000000;
int a[spt];
long long n; 
void snt(){
	
	for (int i=1; i<spt; i++){
		a[i]=1;
	}
	a[1]=1;
	for (int i=2; i<spt; i++){
		if (a[i]==1){
			a[i]=i;
			for (int j=i*2; j<spt; j+=i)
			if (a[j]==1)
			a[j]=i;
		}
	}
}
int main(){
	int test;
	cin>>test;	
	snt();
	while (test--){
	cin >>n;
	for (int i=1; i<=n;i++){
		cout << a[i] << " ";
	}	
	cout << "\n";
	}
	
	return 0;
}

