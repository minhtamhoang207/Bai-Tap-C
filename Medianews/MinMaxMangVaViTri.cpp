#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000
int a[MAX];
int main(){
    int n;
    cin >> n;
    int index, indexM;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=a[0];
    int minn=a[0];
    for (int i=0; i<n; i++){
        if(a[i] >= max){
            max=a[i];
            index=i;
        }
    }
    for (int i=0; i<n; i++){
        if(a[i] <= minn){
            minn=a[i];
            indexM=i;
        }
    }

    cout << max << " " << index+1 << "\n";
    cout << minn << " " << indexM+1;

}
