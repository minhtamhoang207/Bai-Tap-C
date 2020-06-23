#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int stars=n+(n-1);
    int nga=0;
    for(int i=0; i<n; i++){
        int mark=0;
        for(int j=0; j<nga; j++){
            cout << "~";
        }
        for(int k=0; k<stars; k++){
            if(k==stars-1 || i==0 ||k==0){
                cout << "*";
            } else{
                cout << ".";
            }
        }
        stars-=2;
        nga++;
        cout << endl;
    }

}