//simple engineering 
/*
Name:Bivon nyandiko 
Reg num:PA106\G\28825\25
Description : program to prompt user to feel their heights id number and bank accounts
*/
#include<stdio.h>

//main function 
int main(){
   float height,balance;
   int id;
   
   

printf("enter your height in meters ");
scanf("%f",&height );

printf("enter your id number ");
scanf("%d",&id  );

printf("enter your bank account balance ");
scanf("%f",& balance );

//display the results 
printf("\n---user information---\n");
printf("1:your height:2f meters\n",height);
printf("2:your id number:%d\n",id);
printf("3:your bank balance: %2f\n",balance);
return 0;

}