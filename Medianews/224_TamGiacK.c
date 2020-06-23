#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    int ele;
    int decre;
    for(int i=0; i<n; i++){
        ele=num;
        decre=4;
        for(int j=0; j<num; j++){
            printf("%d ",ele);
            ele+=decre;
            decre--;
        }
        num+=1;
        printf("\n");
    }
}