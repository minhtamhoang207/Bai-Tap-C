#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100];
void swap(int &a, int &b){
    int temp =a ;
    a = b;
    b = temp;
}
//void chuyenVi(int *a[][100], &n, &m){
//    for(int i=0; i<m; i++){
//        for (int j=0; j<n; j++) {
//            if(i<j){
//                swap(a[i][j],a[j][i]);
//            }
//        }
//    }
//}

int main(){
    int n,m;
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            b[j][i]=a[i][j];
        }
    }
//    for(int i=0; i<n; i++){
//        for (int j=0; j<m; j++) {
//            if(i<j){
//                swap(b[i][j],b[j][i]);
//            }
//        }
//    }
//    for(int i=0; i<m; i++){
//        for(int j=0; j<n; j++){
//            cout << b[i][j] << " ";
//        }
//        cout << endl;
//    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

}

