#include<stdio.h>
int main (){
	int number1,number2;
	printf("enter two numbers:");
	scanf("%d%d",&number1,&number2);
	if(number1<number2){
		printf("number 1 is smaller\n");
	}else{
		printf("number 2 is smaller\n");
	}
	return 0;
}
