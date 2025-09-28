/*
"water charges"
"0-30 units =20 KES per unit"
"31-60 unts =25 KES per unit"
"Above 60 units = 30 KES per unit"
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	
	float bill, units;
	
	printf("Enter the number of water units consumed");
	scanf("%f",&units);
	
	if(units<=30){
		bill=units * 20.0;
	}

	else if(units>=31 && units<=60){
		bill=units * 25.0;
	}
	else{
		bill=units * 30.0;
	}
	
	printf("total water bill cost  %.2f KES \n", bill);
	
	return 0;
	
      }
      

