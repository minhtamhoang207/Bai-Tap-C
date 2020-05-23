#include <iostream>
using namespace std;
const int N = 1e6;
int arr[N];
int brr[N];
int main()
{
    int n;
    int tang=0;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; ++i){
        bool isExisted = false;
        if(arr[i]!=-1){
            for(int j=i+1; j<n; ++j){
                if(arr[i]==arr[j]){
                    isExisted=true;
                    arr[j]=-1;
                }
            }
            if(isExisted==true){
                brr[tang]=arr[i];
                tang++;
            }
        }
    }
    //cout << tang << "\n";
    for(int i=0; i<tang; i++){
        cout << brr[i] << " ";
    }

    return 0;
}