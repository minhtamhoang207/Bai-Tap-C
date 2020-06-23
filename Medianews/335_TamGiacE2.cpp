#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a= 64 + (n-1);
    char b=a;
    int decre=n;
    for(int i=0; i<n; i++){
        a=b;
        for(int j=0; j<decre; j++){
            cout << a;
            a++;
        }
        b--;
        decre--;
        cout << endl;
    }

}