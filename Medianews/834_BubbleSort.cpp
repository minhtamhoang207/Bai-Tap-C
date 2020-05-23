#include <bits/stdc++.h>
using namespace std;
const int X = 1e6;
int a[X];
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(int a[], int n){
    int dem=0;
        for(int i=0; i<n-1; i++){
            dem=0;
            for (int j=0; j<n-i-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    dem++;
                }
            }
            if(dem==0){
                break;
            }
            for (int i=0; i<n; i++){
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
    BubbleSort(a, n);
}