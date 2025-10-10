/*
name:Bivon nyandiko
reg no;PA106/G/28825/25
Description:Number guessing game 
*/

#include<stdio.h>
#include<time.h>

int main(){
	int number,guess,attempts =0;
	 
	 printf("welcome to the number guessing game! \n");
	 printf("am thinking of a number btwn 1 and 100 \n");
	 
	 do{
		 printf("enter the guess");
		 scanf("%d" ,&guess);
		 attempts++;
	 
	 	if(guess<number) {
			 printf("Too low! try again \n");
		 }
		 else if(guess>number){
			 printf("Too high! try again \n");
		 }
		 else{
			 printf("Congratulations! you guessed the number in %d attempts \n",attempts);
			 
			 }
			 
	 }	 while(guess=number);
			 
			 
			 
			 
         return 0;
	 
}