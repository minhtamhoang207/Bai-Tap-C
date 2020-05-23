#include <bits/stdc++.h>
using namespace std;
const int X = 1e6;
int a[X];
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int a[], int n){
    int index=0;
    for(int i=0; i<n-1; i++ ){
        index=i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[index]){
                index=j;
            }
        }
        swap(a[i], a[index]);
        for(int i=0; i<n ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    selectionSort(a, n);
}