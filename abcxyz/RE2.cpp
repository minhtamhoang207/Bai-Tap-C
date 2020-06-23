#include <stdio.h>
long long a[10000000], b[10000000];
int main(){
	int n,test,m=0;
	scanf("%d",&test);
	while (test--){
	scanf ("%d",&n);
	for (int i=0; i<n; i++) scanf ("%lld",&a[i]);
	for (int i=0; i<n; i++){
		b[i]=0;
	}
	for (int i = 0; i < n; i++){
		if (a[i] != 0){
			b[m] = a[i];
			m++;
		}
	}
	for (int i = 0; i < n; i++)	{
		printf("%lld ", b[i]);
		m=0;
	}
	printf ("\n");
	}
}

