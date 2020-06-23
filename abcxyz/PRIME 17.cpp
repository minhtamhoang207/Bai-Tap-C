#include<bits/stdc++.h>
using namespace std;
const int N = 10000000;
int isPrime[N];
void snt(){ 
    for(int i = 0 ;  i < N ; i++) isPrime[i] = 0;
    isPrime[0] = isPrime[1] = 1;
    for(int i = 2 ; i <= sqrt(N) ; i++){
        if ( isPrime[i] == 0 ){ 
            for(int j = i * i ; j < N ; j += i)
                isPrime[j] = 1; 
        }
    }
}
int main(){
    snt();
    int test;
    cin>>test;
    while(test--){
        long long l,r,count=0;
        cin >> l >> r;
        l=sqrt(l);
        r=sqrt(r);
        for (int i=l; i<=r; i++){
        	if (isPrime[i]==0)
        	count ++;
		}
		cout << count << "\n";
    }
}
