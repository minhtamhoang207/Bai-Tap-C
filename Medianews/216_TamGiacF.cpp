#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int incre;
    int num=1;
    for(int i=0; i<n; i++){
        incre=1;
        for(int j=0; j<num; j++){
            printf("%d",incre);
            incre++;
        }
        num+=2;
        printf("\n");
    }
}