#include<stdio.h>
int main(){
	
	float num1,num2,res;
	char op;
	
	printf("select char (+, -, /, *): ");
	scanf("%c", &op);
	
	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);
	
	
	switch(op){
		case '+':
			res = num1 + num2;
			printf("Result= %.2f ",res);
            break;
        case '-':
			res = num1 - num2;
			printf("Result= %.2f ",res);
            break;
        case '*':
			res = num1 * num2;
			printf("Result= %.2f ",res);
            break;
        case '/':
        	if(num2 != 0)
			res = num1 / num2;
			else {
                printf("Error! Division by zero is not allowed.");
                return 1;
            }
			printf("Result= %.2f ",res);
            break;
        default:
        	printf("Invalid operator");
	}
	 return 0;
}   
