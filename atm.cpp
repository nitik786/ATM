
#include<stdio.h>
int with(int ,int);
int main(){
	int i;
	char r;
	int w;
	int sum;
	int sum1,sum2,sum3;
	int withdraw;
	printf("first Enter the amount you want to have in your Bank Amount\n");
	printf("Enter w to withdraw money\n");
	printf("Enter f for fastcash\n");
	printf("Enter b for balance check\n");
	printf("press e for exit\n");
	printf("Enter the amount you want to withdraw\n");
	scanf("%d",&w);
	scanf("%d %c",&i,&r);
	withdraw= with(i,w);
	printf("Thank you for your transcation your new balance is %d\n",sum);
	return 0;
	switch(r){
		case 'w':
			if(i>w){
				int with(int i, int r);
				sum=i-w;
				return sum;
			}else{
				printf("not suffiencient balance");
			}
			break;
		case 'f':
			printf("\nFast cash amount are\n 5,000\n \n10,000\n \n15,000");
			int a;
			printf("\nEnter 1 to withdraw 5,000\n Enter 2 to withdraw 10,000 \n enter 3 to withdraw 15,000");
			scanf("%d",&a);
			if(i>=15000){
			switch(a){
				case 1:
					sum1=i-5000;
					printf("Thank you your new amount is %d",sum1);
					break;
				case 2:
					sum2=i-10000;
					printf("Thank you your new amount is %d",sum2);
					break;
				case 3:
					sum3=i-15000;
					printf("Thank you your new balance is %d",sum3);
					break;
				default:
				printf("Exited");
				break;
					}
				break;	
				}
				
			else{
					printf("You do not have sufficient amount\n SORRY\n");
				}	
		case 'b':
				printf("Your current balance amounr is %d",i);
				break;
		case 'e':
			printf("exited");
			break;							
			
	default :	
		printf("Thank you for using\n");
		break;
	}
	return 0;
}
