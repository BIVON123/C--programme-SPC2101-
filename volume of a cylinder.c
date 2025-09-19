/*
Name:Bivon nyandiko
Reg no:PA106/G/28825/25
Description:program to calculate volume of a cylinder
volume=pi*r*r*h
*/
#include <stdio.h>
int main(){
    
    float radius,height,volume;
    
    printf("\n enter radius of the cylinder");
    scanf("%f",&radius);

    
    printf("\n enter the height of the cylinder");
    scanf("%f",&height);

    volume=3.142*radius*radius*height;

    
    printf("the volume of the cylinder is %.2
	f",volume);
    return 0;

}