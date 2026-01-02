#include <stdio.h>

int main() {
	
	int cost, price,saved;
	
	printf("Enter the amount: ");
	scanf("%d", &cost);
	
	
	if(cost>500){
		
		if(cost>500 && cost<=2000){
			price = 0.95*cost;
		} 
		else if(cost>2000 && cost<=4000){
			price= 0.90*cost;
		}
		else if(cost>4000 && cost<=6000){
			price= 0.80*cost;
		} 
		else{
			price= 0.75*cost;
		}  	
		saved= cost-price;
		printf("Congrats, You saved Rs%d \n",saved);
		printf("Your total bill is: %d \n", cost);
		printf("Your bill after the discount is: %d\n", price);
	}
	else {
		printf("Sorry, Minimum spending amount must be over 500");
	}
	
	return 0;
}
