/*
Name:Bivon nyandiko
Reg No:PA106/G/28825/25
Description:FUNCTION ON FARE
*/

#include <stdio.h>
float calculateFare(float distance,float rate);
rate=50.0;

void main()
{
float result,distance,rate;
rate=50.0;
printf("Enter distance travelled in (Km)");
scanf("%f",&distance);

//function call
result=calculateFare(distance,rate);
printf("Fare to be paid is %.2f",result);

return 0;
}

//function declaration
float calculateFare(float distance,float rate)
{
	float fare;
	fare=distance*rate;
	return fare;
}