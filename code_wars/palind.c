
#include<stdio.h>
#include<string.h>
// #include<conio.h>

int main(){
	int i;
	int j;
	char checker;
	char str1[20];
	printf("Enter a string:");
				
scanf("%s",&str1);

int y=strlen(str1);
printf(" the string length is %d\n",y);

	
	for(i=0; i<y; i++){
		if(str1[i] == str1[y-1-i]){
			checker = true;
		}else{
			checker = false;
		}
	}
			
if(checker){
	printf("%s is a palindrome",str1);
	
}
else{
	printf("%s is not a palindrome",str1);
}

	return 0;
}