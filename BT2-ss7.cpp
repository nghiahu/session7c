#include <stdio.h>
int main(){
	printf("Cac so Armstrong co 3 chu so la:\n");
	for(int n=100;n<=999;n++){
		int a,b,c;
		a=n/100;
		b=(n/10)%10;
		c=n%10;
		if((a*a*a)+(b*b*b)+(c*c*c)==n){
			printf("%d \n",n);
		}
	}
}
