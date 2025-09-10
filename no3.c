#include<stdio.h>
//calculation of gross salary
int main(){
	//bs=bsic salary,da=dearness allow,hra=house rent allowance,ta=transport allowance
	int bs;
	printf("entre basic salary :");
	scanf("%d",&bs);
	
	int da,hra,ta;
	da=(10/100.0)*bs;
	hra=(5/100.0)*bs;
	ta=(2/100)*bs;
	printf("entre da :%f\n",da);
    printf("entre hra:%f\n",hra);
	printf("entre tra :%f\n",ta);
	
	float t;
	
	t= bs+da+hra+ta;
	printf("gross salary :%f\n",t);
     return 0;
}