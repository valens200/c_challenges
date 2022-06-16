#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>


struct Person{
	
	char name[100];
	char address[100];
	char dob[50];
	char gender[50];
	
	
};

struct Money{
	
	float principle;
	float time;
	float rate;
};

float myNumbers(float principle, float rate, float time){
	return principle*rate*pow((1+rate), time) / pow((1+rate), (time - 1));
	
}
int main(){
 struct Person person1;
 struct Money money;
 
	
  printf("Well come : ");
  printf("Enter the name: \n");
  scanf("%s", person1.name)	;
  printf("Entered %s\n",person1.name);
  printf("Enter your address :%s\n", person1.name);
  scanf("%s", person1.address);
  printf("Entered address: %s\n", person1.address);
  printf("Enter DOB in the format dd/mm/yy: \n");
  scanf("%s", person1.dob);
  printf("Entered DOB : %s\n", person1.dob);
  printf("Enter your gender: \n");
  scanf("%s", person1.gender);
  printf("Entered gender: %s\n", person1.gender);
  
  
  
  
  printf("======calculation part =========\n");
  printf("Enter the principle amount : \n");
  scanf("%f",&money.principle);
  printf("Entered %.2f\n", money.principle);
  printf("Enter interest rate: \n");
  scanf("%f",&money.rate);
  printf("Entered rate: %.1f", money.rate);
  printf("Enter the time in years: \n");
  scanf("%f",&money.time);
  
  money.rate = money.rate/ 1200;
  money.time = money.time * 12;
  
  
  printf("Bower basic information : \n:");
  printf("%s", person1.name);
  printf("Address : %s\n",person1.address);
  printf("dob: %s \n", person1.dob);
  printf("gender: %s\n", person1.gender);
  
 float EMI = myNumbers(money.principle, money.rate, money.time);
 printf("EMI mney is equal to : %f\n", EMI);
 printf("TLP is equal to : %f\n", EMI * money.time);
	
	
	return 0;
}