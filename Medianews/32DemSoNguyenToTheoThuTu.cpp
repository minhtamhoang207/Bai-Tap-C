#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 1e6;
int arr[N];
int brr[N];
int isPrime(int n){
    int dem=0;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0)
        return 1;
    return 0;
}
int main()
{
    int n;
    int tang;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    std::sort(arr,arr+n);
    for(int i=0; i<n; i++){
        tang=1;
        if(arr[i]!=-1 && isPrime(arr[i])){
            for(int j=i+1; j<n; j++){
                if (arr[i]==arr[j]){
                    tang++;
                    arr[j]=-1;
                }
            }
            cout << arr[i] << " " << tang << "\n" ;
        }
    }
}