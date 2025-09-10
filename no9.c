#include<stdio.h>
int main(){
    int sec;
    printf("entre time in sec:\n",sec);
    scanf("%d",&sec);

int min;
    printf("time in min: %d\n",min);
    scanf("%d",&min);
    
int hr;
    printf("time in hr: %d\n",hr);
    scanf("%d",&hr);
    
    int Total_seconds=sec + min*60 + hr*3600;
    printf("original time in total seconds: %d\n",Total_seconds);

return 0;
}