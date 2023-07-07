// PR4(2) write a program to print the below pattern using neasted for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,e=11;

clrscr();

for(i=1;i<=5;i++){
for(j=1;j<=i;j++){

printf("%d",e++);}
printf("\n");}

getch();
}

