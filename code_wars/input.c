#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main() {
//   char lastName[11];
//   char firstName[11];
//   char firstCow[11];

//   printf("Enter your name (last , first): ");
//   scanf("%10s%*[^,],%10s",lastName,firstName);
//   printf("Nice to meet you %s %s\n",firstName,lastName);

 char lastName[11] = "valens";
 char firstName[11] = "niyonsenga";
 if(strncasecmp(firstName, lastName)){
     printf("yes");
 }
//   printf("enter the name of cow: ");
//   scanf("%10s%*[^,],", firstCow);
//   printf("|%-10s|", firstCow);



  
}