#include <stdio.h>
int mx(int x,int y){
    return x>y?x:y;
}
int main(){
    int arr[3];
    int i,j;
    while(1){
        scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
        for(i=2;i>-1;i--){
            for(j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    arr[j] ^= arr[j+1];
                    arr[j+1] ^= arr[j];
                    arr[j] ^= arr[j+1];
                }
            }
        }
        printf("%d,%d,%d\n",arr[0],arr[1],arr[2]);
    }
    
}