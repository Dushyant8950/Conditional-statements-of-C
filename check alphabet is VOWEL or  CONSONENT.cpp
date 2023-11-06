#include<stdio.h>
int main(){
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	//condition to check enter charcter is alphabet or not
	if(ch>='a' && ch<='z'){
	//condtion to check enter alphabet is VOWEL or CONSONENT
		switch(ch){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("alphabet is VOWEL");
			break;
			default:
				printf("alphabet is CONSONENT");
		}
	}else{
		printf("%c is not alphabet",ch);
	}
	return 0;
}
