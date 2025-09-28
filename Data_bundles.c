/*
"mobile services on internet bundles"
"option 1:100MB=50 KES"
"option 2:500MB=200 KES"
"option 3:1GB=350 KES"
"option 4:2GB=600 KES"
*/

#include<stdio.h>

int main(){
	
	int bundles_choice;
	
	printf("select data bundles \n");
	printf("1.100MB @ 50 KES \n");
	printf("2.500MB @ 200 KES \n");
	printf("3.1GB @ 350 KES \n");
	printf("4. 2GB @ 600 KES \n;");
	
	
	printf("Enter the amount of bundles_choices(1-4):");
	scanf("%d",&bundles_choice);
	
	switch(bundles_choice){
		case 1:
		printf("you selected 100MB,cost=50KES \n");
		break;
	
	    case 2:
		printf("you selected 500MB,cost=200KES \n");
		break;
	
	    case 3:
	   	printf("you selected 1GB,cost=350KES \n");
	   	break;
	   
	    case 4:
		printf("you selected 2GB,cost=600KES \n");
		break;
		
	   	default:
        printf("invalid number \n");
		}

	
	
	return 0;
	
}