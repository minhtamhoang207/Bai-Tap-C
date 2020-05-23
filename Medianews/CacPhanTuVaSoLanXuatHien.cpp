#include <iostream>
using namespace std;
const int N = 1e6;
int arr[N];
int brr[N];
int main()
{
    int n;
    int tang;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        tang=1;
        if(arr[i]!=-1){
            for(int j=i+1; j<n; j++){
                if (arr[i]==arr[j]){
                    tang++;
                    arr[j]=-1;
                }
            }
            cout << arr[i] << " " << tang << "\n";
        }
    }
}