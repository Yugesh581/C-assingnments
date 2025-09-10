#include<stdio.h>
    int main(){

    int m;
    printf("marks in maths out of 200:\n");
    scanf("%d",&m);

    int p;
    printf("marks in physics out of 200:\n");
    scanf("%d",&p);

    int c;
    printf("marks in chemistry out of 200:\n");
    scanf("%d",&c);

    int e;
    printf("marks in entrancs examination out of 200:\n");
    scanf("%d",&e);

    int CM=m/2 + p/2+ c/2 + e;
    printf("cutoff marks of a student :\n",CM);

    return 0;


    }
    