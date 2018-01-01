#include<stdio.h>
#include<conio.h>
void main(){

int i=0,array[20],MAX=0;
clrscr();
while(i<20){
	printf("Enter array[%d]:",i);
	scanf("%d", &array[i]);
	i++;
	}
i=0;
while(i<20){

	if(MAX<array[i]){
		MAX=array[i];
	}
	i++;

}
printf("MAX is %d",MAX);

getch();

}
