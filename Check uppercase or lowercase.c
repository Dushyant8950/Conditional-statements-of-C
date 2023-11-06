 #include<stdio.h>
 int main(){
 	char ch;
 	printf("enetr charcter:");
 	scanf("%c",&ch);
 	if(ch>='A' && ch<='Z'){
 		printf(" Character from upper case\n");
	 }else if (ch>='a' && ch<='z'){
	 	printf("Character from lower case\n");
	 }else{
	 	printf("it is not a character\n");
	 }
	 return 0;
 }
