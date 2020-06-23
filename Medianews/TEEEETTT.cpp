#include <bits/stdc++.h>
using namespace std;
int main ()
{

    char str[100];
    int count;
    int max=0;
    string maxx, min;
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
    int maxSize=s[0].size();
    int minSize=s[0].size();
    for (int i=0; i<incre; i++){
        if(s[i].size() > maxSize){
            maxx=s[i];
            maxSize=s[i].size();
        }
        if(s[i].size() < maxSize){
            min=s[i];
            minSize=s[i].size();
        }
    }
    cout << maxx << " " << min;

}

