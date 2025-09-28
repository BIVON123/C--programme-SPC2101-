/*
Name:Bivon nyandiko
Reg no:PA106/G/28825/25
Description:program to find the eligibility of a student to sit for final exams
*/

#include<stdio.h>

int main(){
	
	float attendance,average_marks;
	
	printf("enter attendance percentage");
	scanf("%f", &attendance);
	
	printf("enter average_marks");
	scanf("%f", &average_marks);
	
	if(attendance>=75 &&average_marks>=40){
		printf("eligible for final examination \n");
		
	}
	else{
		printf("not eligible for final examination \n");
	}
	
	return 0;
}