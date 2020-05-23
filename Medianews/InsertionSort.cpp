#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int a[MAX];
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=1; i<n; i++){
        int j=i-1;
        int temp = a[i];
        while (j>=0 && temp < a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]= temp;
        for(int k=0; k<n; k++){
            cout << a[k] << " ";
        }
        cout << "\n";
    }

}