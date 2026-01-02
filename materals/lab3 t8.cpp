#include <stdio.h>

int main(){
	
	float num1,num2,sum,prod,div,sub;
	printf("Enter two numbers: ");
	scanf("%f %f",&num1, &num2);
	
	sum = num1+num2;
	printf("The sum of two numbers is: %.1f\n", sum);
	
	sub = num1-num2;
	printf("The difference of two numbers is: %.1f\n", sub);
	if(num2 !=0){
	
	div = num1/num2;
	printf("The quotient of two numbers is: %.1f\n", div);
    } else{
    	printf("Division not possible\n");
	}
	prod = num1*num2;
	printf("The product of two numbers is: %.1f", prod);
	
	return 0;
}
