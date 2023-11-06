 #include<stdio.h>
 int main(){
 	char ch;
 	printf("enter any charcter:");
 	scanf("%c",&ch);
 	if(ch >= '0' && ch <= '9'){
 		printf("character is digit");
	 }else{
	 	printf("charater is not a digit");
	 }
	 return 0;
 }
