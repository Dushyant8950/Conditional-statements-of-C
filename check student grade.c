#include<stdio.h>
int main(){
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if(marks>=80 && marks<=100){
		printf("student is intelligent\n");
	}else if(marks>=60 && marks<=79){
		printf("student is very good\n");
	}else if(marks>=37 && marks<=59){
	printf("student is good\n");
	}else{
		printf("student is fail\n");
	}
	return 0;
} 
