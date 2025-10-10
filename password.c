/*
Name:Bivon nyandiko
Reg no:PA106/G/28825/25
Description:prompting the user to enter password
*/

#include<stdio.h>
#include<string.h>

int main(){
	char password[20];
	int attempts=0;
	const char correctpassword[]="1234";
	
	printf("password system : you have 3 attempts \n ");
	
	
	do{
		printf("Enter password");
		scanf("%c",password);
		
		if(strcmp(password,correctpassword)==0){
			printf("Access Granted \n");
		}
		else if(attempts>3){
			printf("incorrect password.try again,%d attempts left \n",attempts);
			
		}
		else{
			printf("Access Denied.too many attempts \n",attempts);
		}
	}while(attempts<3);
	
	printf("Access granted \n");
	
	return 0;
}