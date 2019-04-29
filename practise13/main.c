#include <stdio.h>
int isShuixianhua(int n){
    int count = 0;
    int temp = n;
    while(temp){
        int bit = temp%10;
        count += bit*bit*bit;
        temp /= 10;
    }

    return count == n?1:0;
}
int main(){
    int i;
    for(i=100;i<1000;i++){
        if(isShuixianhua(i)==1){
            printf("shuixianhua:%d\n",i);
        }
    }
}