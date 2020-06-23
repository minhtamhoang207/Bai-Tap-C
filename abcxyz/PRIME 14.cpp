#include <bits/stdc++.h>
using namespace std;
int isPrime(int soA)
{
    if (soA < 2)
        return 0;

    for (int i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        long long n;
        cin >> n;
        for (int i=2; i<=n; i++){
            int sqr=0;
            sqr= sqrt(i);
            if (sqr*sqr==i && isPrime(sqrt(i))){
                cout << i << "\n";
            }
        }
    }

}

