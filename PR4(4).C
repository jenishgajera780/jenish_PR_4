 // PR4(4) write a program to print the below pattern using neasted for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,e;

clrscr();

for(i=1;i<=5;i++){
for(e=1;e<=i;e++){

printf(" ");}
for(j=5;j>=i;j--){

printf("%d",j%2);}
printf("\n");}

getch();
}

