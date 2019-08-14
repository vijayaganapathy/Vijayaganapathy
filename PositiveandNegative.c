#include <stdio.h>
int main() {
	double num;
	printf("enter a number");
	scanf("%lf",&num);
	if(num>0.0){
	printf("Positive");
	}
	else if(num<0.0){
	printf("Negative");
	}
	else
	printf("Zero");
}
