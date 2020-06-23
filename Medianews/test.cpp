#include <bits/stdc++.h>
using namespace std;
int main ()
{

    char str[100];
    int count;
    int max=0;
    string prt;
    gets(str);
    strlwr(str);
    int incre=0;
    char * pch;
    string s[100];
    pch = strtok (str," ,.-");
    while (pch != NULL)
    {
        s[incre]=pch;
        incre++;
        pch = strtok (NULL, " ,.-");
    }
    for (int i=0; i<incre-1; i++){
        count=1;
        for(int j=i+1; j<incre; j++){
            if ( s[i] == s[j]){
                count++;
            }
            if(count > max){
                max=count;
                prt=s[i];
            }
        }
    }
    cout << prt <<" "<< max;
}

