#include <iostream>
using namespace std;
int main(){
    int demC=0, demL=0;
    int a[100000];
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n;i++){
        if (a[i]%2!=0){
            demL++;
        }
    }
    cout << demL<< " ";
    for (int i=0; i<n;i++){
        if (a[i]%2!=0){
            cout <<a [i]<< " ";
        }
    }
    cout << "\n";
    for (int i=0; i<n;i++){
        if (a[i]%2==0){
            demC++;
        }
    }
    cout << demC<< " ";
    for (int i=0; i<n;i++){
        if (a[i]%2==0){
            cout <<a [i]<< " ";
        }
    }


}
