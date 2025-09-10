#include<stdio.h>
int main(){

char ch;
printf ("entre a character :");
scanf("%c",&ch);

if(ch>='A' && ch<='Z'){
    printf("'%c'is a upper case letter.\n",ch);
}

else if (ch>='a' && ch<='z'){
    printf("'%c'is a lower case letter.\n",ch);
}

else if (ch>='0' && ch<='9'){
    printf("'%c'is a digit.\n",ch);
}

else {
    printf("'%c'is a spacial symbol.\n",ch);
}

return 0;
}