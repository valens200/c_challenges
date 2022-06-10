
#include<stdio.h>


int main(){

float income;
float workers;
float totalIncomeForone;
float minmumBase = 2000.00;
float income_for_one_worker;
float sharedAmount = 0.07;
float insurance = 0.05;
float transport = 0.05;
float taxes = 0.15;
int income_leftForone;
int totalTaxes;
float initial_shared;





printf("enter the income of your campany :");
scanf("%f",&income);
printf("entr the number of workers: ");
scanf("%f",&workers);

initial_shared = sharedAmount / workers;
income_for_one_worker = income *  initial_shared;
totalIncomeForone = income_for_one_worker +  minmumBase;
float totalDeductions = taxes + transport + insurance;
float listDeductions = transport + insurance;
income_leftForone = (totalIncomeForone -listDeductions);
totalTaxes = (income_leftForone * taxes) * workers;




printf("ever developer has the following salary: %d\n", income_leftForone);
printf("the tatal Taxes for all developers  = %d", totalTaxes);


return 0;

}