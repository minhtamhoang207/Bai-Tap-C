#include <iostream>
using namespace std;
long long a[10000000];
int main(){
    long long n ;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout << a[0]<< " "<< a[n-1];
}
