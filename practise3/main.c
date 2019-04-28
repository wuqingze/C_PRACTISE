#include <stdio.h>

int main(){
	int k;
	for(k=1;k<=168;k++){
		if(168%k == 0){
			if((168-k)%2==0){
				int y = (168-k)/2;
				printf("%d",y*y-100);
			}
		}
	}
}
