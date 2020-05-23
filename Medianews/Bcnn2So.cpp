#include <iostream>
using namespace std;
long UCLN(long a, long b){
    if(b%a==0)
        return a;
    else
        return UCLN(b%a,a);
}

int main()
{
    long a, b;
    cin >> a >> b;
    cout << a*b/UCLN(a,b)<<" ";
}

