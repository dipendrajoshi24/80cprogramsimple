#include<stdio.h>
void main()
{
	int choice;
	printf("Enter choice(2d for 2,3d for 3):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("you selected 2d\n");
			break;
			case 2:
				printf("you selected 3d\n");
				break;
				default:
					printf("invalid input\n");
				
	}
}
