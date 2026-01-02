#include <stdio.h>

int main(){
	
	int score;
	printf("Enter your score: ");
	scanf("%d", &score);
	
     if(score>700){
     	printf("You are eligible.");
	 }
	 else if(score>=600 && score <=699){
	 	printf("You need to provide additional documents");
	 }
	 else{
	 	printf("Sorry, Not eligible.");
	 }
	
	return 0;
}
