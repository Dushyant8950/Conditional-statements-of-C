#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	//a>b operator
	if(a>b){
		printf("a is greater than b\n");
	}else{
		printf("a is smaller than b\n");
	}
	//a>=b operator
	if(a>=b){
		printf("a is greater than equals to b\n");
	}else{
		printf("a is less than equals to b\n");
	}
	//a<b operator
	if(a<b){
		printf("a is smaller than b\n");
	}else{
		printf("a is greater than b\n");
	}
	//a<=b operator
	if(a<=b){
		printf("a is less than equals to b\n");
	}else{
		printf("a is greater than equals to b\n");
	}
	//a==b operator
	if(a==b){
		printf("a is equals to b\n");
	}else{
		printf("a is not equals to b\n");
	}
	//a!=b operator
	if(a!=b){
		printf("a is not equals to b\n");
	}else{
		printf("a is equals to b\n");
	}
	return 0;
}
