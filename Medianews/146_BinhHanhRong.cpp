#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m=n;
    for (int i=0; i<n; i++){
        for (int j=0; j<m-1; j++){
            cout << "~";
        }
        for(int k=0; k<n; k++){
            if(i!=0 && i!= n-1){
                if(k==0 || k==n-1 ){
                    cout << "*";
                }
                else{
                    cout << ".";
                }
            }
            else {
                cout << "*";
            }
        }
        m--;
        cout << endl;
    }
}