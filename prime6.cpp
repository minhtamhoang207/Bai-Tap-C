#include <stdio.h>
#include <math.h>
int a[10000];
void nt( int n, int a[10000]){
	for (int i=2; i<=n; i++){
		a[i]=1;
	}
	for (int i=2; i<=sqrt(n); i++){
		if (a[i]==1){
			for (int j=i*i; j<=n; j+=i)
			a[j]=0;
		}
	}
}
int main(){
	int n,test, a[10000];
	scanf ("%d",&test);
	while (test--){
		scanf ("%d",&n);
		nt( n, a);
		for (int i=2; i<=n/2 ;i++){
			if(a[i]==1 && a[n-i]==1) {
			printf ("%d %d",i,n-i); break;
			} 
		}
		printf ("\n");
	} 
		return 0;
}

