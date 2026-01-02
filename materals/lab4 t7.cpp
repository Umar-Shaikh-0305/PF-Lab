#include <stdio.h>

int main(){
	
	float time;
	printf("Enter the time: ");
	scanf("%f", &time);
	
	if(time>= 5 && time<=11){
	printf("Good Morning");
     }
	else if(time>=12 && time<=18){
	 	printf("Good Evening");
	  }
	else{
	  	printf("Good Night");
	  }
    return 0;
}
