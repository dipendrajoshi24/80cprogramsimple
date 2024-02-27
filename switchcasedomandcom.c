#include<stdio.h>
void main()
{
	int choice;
	printf("Enter choice(1 for domestic bill collection,2 for commercial bill collection):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("you selected domestic bill collection\n");
			break;
			case 2:
				printf("you selected commercial bill collection\n");
				break;
				default:
					printf("invalid input\n");
				
	}
}
