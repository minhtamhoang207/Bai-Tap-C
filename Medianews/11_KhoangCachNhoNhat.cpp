#include <bits/stdc++.h>
using namespace std;
const int X = 1e6;
int a[X];
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int min=abs(a[0]-a[1]);
    int pt1=a[0];
    int pt2=a[1];
    for (int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int tru=abs(a[i]-a[j]);
            if(tru < min){
                min=tru;
                pt1=a[i];
                pt2=a[j];
            }
        }
    }
    cout << min << " ";
    if(pt1<pt2){
        cout << pt1 << " " << pt2;
    }
    else{
        cout << pt2 << " " << pt1;
    }

}