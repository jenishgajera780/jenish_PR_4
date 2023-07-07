// PR4(5) write a program to print the below pattern using neasted for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,e;

clrscr();

for(i=1;i<=5;i++){
for(j=1;j<=i;j++){

printf("%d",j);}
for(j=i*2;j<=5*2;j++){
printf(" ");}
for(j=i;j>=1;j--){
printf("%d",j);}
printf("\n");}

getch();
}

