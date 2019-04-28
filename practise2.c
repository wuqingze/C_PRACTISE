#include <stdio.h>

float bonus(int lirun){
	if(lirun<100000){
		return lirun*0.1;
	}else if(lirun < 200000){
		return 10000+(lirun-100000)*0.075;
	}else if(lirun <400000){
		return (lirun-200000)*0.05;
	}else if(lirun <600000){
		return (lirun-400000)*0.03;
	}else if(lirun <=1000000){
		return (lirun-600000)*0.015;
	}else{
		return (lirun-1000000)*0.01;
	}
}
int main(){
	int lirun;
	while(1){
		printf("please input lirun:");
		scanf("%d",&lirun);
		printf("the bonus is %.2f\n",bonus(lirun));
	}
	return 0;
}
