#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
	int N;
	cin >> N;
	int du=25;
	for (int i=0; i<N; i++) 
	cin >> a[i];
	if (a[0]!=25) cout << "NO";
	else{
		for (int i=1; i<N; i++){
			if(a[i] == 25 ) du+=25;
			if(a[i] == 50 ) du-=25;
			if(a[i] == 100) du-=75;
		}
		if(du>=0) cout << "YES" << "\n";
		else cout << "NO" << "\n";	
	}
	
	
	 
}
