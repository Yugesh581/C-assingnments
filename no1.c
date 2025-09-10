#include<stdio.h>

int main(){
	float p;
	float r;
	float t;
	printf("Enter principal: ");
	scanf("%f", &p);
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	printf("Enter time: ");
	scanf("%f", &t);
	float SI = (p*r*t)/100;
	printf("the simple interest is= %f",SI);
	return 0;
}
