#include <bits/stdc++.h>
using namespace std;
#define X 100000
int a[X];
int b[X];
int main(){
    int n;
    int dem;
    int tang=0;
    int dempt = 0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; ++i){
        dem=0;
        for(int j=0;j<n;++j){
            if(a[i] == a[j]){
                dem++;
            }
        }
        if(dem==1){
            //cout << a[i] << " ";
            b[tang]=a[i];
            tang++;
            dempt++;
        }
    }
    if(dempt == 0){
        cout << "0";
    }
    //cout << dempt << "\n";
    for(int i=0; i<tang;i++){
        cout << b[i] << " ";
    }

}