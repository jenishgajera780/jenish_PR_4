#include<stdio.h>
#include<conio.h>

void main (){

int i,j,k,s;

for(i=5;i>=1;i--){

for(k=i;k>=1;k--){
    printf(" ");
}

for(j=i;j<=5;j++){

    printf("%d",j);
}

for(s=4;s>=i;s--){
    printf("%d",s);
}

printf("\n");
}
getch();
}
