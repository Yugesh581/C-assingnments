#include<stdio.h>
int main(){
  int a=10,b=25;
  
  printf("%d %d", a, b);	 
	 
	 int t=a;
	     a=b;
	     b=t;
printf("%d %d ", t=a,b=t);

return 0;
}