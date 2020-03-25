#include<iostream>
using namespace std;
int main(){
    int n,k;
    int test;
	cin>>test;
    while (test--){
	int p, flag=0;
    cin >> n >>k;
	int n1=n;
    int count=0;
    for(int i=2;i<=n;i++){
        while (n1%i == 0 && count <k) {
            n1 /= i;
			count++;
            if (count==k){
            	p=i;
            	flag=1;
            	break;
			}     
        }
		if (flag==1) break;
	}
    if (flag ==1) cout << p << "\n";
    else cout <<"-1" << "\n";
        
 	}
    return 0;
}
