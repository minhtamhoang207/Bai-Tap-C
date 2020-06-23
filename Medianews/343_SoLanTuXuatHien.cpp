#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    strlwr(str);
    int count;
    int checked;
    char *pch;
    string s[100];
    int incre=0;
    pch= strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, " ,.-");
    }
    for(int i=0; i<incre-1; i++){
        count=1;
        if(s[i] != "-1"){
            for(int j=i+1; j<incre; j++){
                if (s[i]==s[j]){
                    count++;
                    s[j]="-1";
                }
            }
            cout << s[i] << " " << count << endl;
        }
    }


}