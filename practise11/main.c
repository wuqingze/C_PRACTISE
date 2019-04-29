#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int st = (int)sqrt(n);
    int i=2;
    for(i=2;i<=st;i++){
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int i;
    for(i=101;i<=212;i++){
        if(isPrime(i)==1){
            printf("prime:%d\n",i);
        }
    }
}