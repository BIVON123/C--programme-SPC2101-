/*
Name:BIVON NYANDIKO
Reg no:PA106/G/28825/25
Description:writing a python program impementing some requirements
*/
#include<stdio.h>
int main(){

    float income; //%f
    int age; //%d

    printf("please enter your age:");
    scanf("%d",&age);

    printf("please enter your annual income:");
    scanf("%f",&income);
    
    printf(" congratulations!you qualify for a loan \n");
    printf("unfortunately,we are unable to offer you a loan at this time \n");

    return 0;
	}