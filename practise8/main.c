#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            printf("%d%c%d%c%-3d",i,'X',j,'=',i*j);
        }
        printf("\n");
    }
}