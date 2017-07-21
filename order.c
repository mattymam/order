#include <stdio.h>

int main(){

int a;
int b;
int c;



printf("please enter a number:");
scanf("%d", &a);
printf("please enter a second number:");
scanf("%d", &b);
printf("please enter a third number:");
scanf("%d", &c);
 if(a < b){
	if(a<c){
		if(c<b){
			printf("%d %d %d", a, c , b);
		} else { printf("%d %d %d",a,b, c);}
	}else{
		printf("%d %d %d",c,a, b);}

		
} else if (a < c){
	printf("%d %d %d",b,a, c);}
	else if(b <c){
		printf("%d %d %d",b, c, a);
	}else {
		printf("%d %d %d",c,b, a);}




}
