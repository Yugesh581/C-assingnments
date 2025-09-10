#include<stdio.h>
    int main(){

        int s=31558150;
        float a=s/60;
        printf("for minutes %f",a);

        float b=a/60;
        printf("for hours %f",b);

        float c=b/24;
        printf("for day %f",c);

        return 0;
    }