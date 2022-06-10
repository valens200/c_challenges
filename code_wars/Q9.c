#include<stdio.h>
int main(){
    char key;
    int age;
    int points = 0;
    int smoking;
    int pressure;
    int fats;
    printf("Wellcome to hopital\n");
    printf("ENter y key to continue\n");
    scanf("%c",&key);

    if(key =='y'){
        goto start;
    }else{
        printf("enter real character\n");
        exit(0);
        
    }

    start: 
    printf("how old are you??\n");
    scanf("%d",&age);

       if(age<20){
           points = points + 1;
       }else if(age<30){
           points = points + 2;
       }else{
           points = points + 3;
       }

    printf("are you a smoker?? enter 1 for yes and 0 for no\n");
    scanf("%d", &smoking);

    if(smoking == 1){
        points = points + 4;
    }else {
        goto bloodPressure;
    }


    bloodPressure:
    printf("have you high blood pressure? 1 for yes and 0 for no\n");
    scanf("%d", &pressure);

    if(pressure == 1){
        points = points + 2;
    }else if(pressure == 0){
        points = points;
    }else {
        printf("enter the real answer\n");
    }

    printf("do you take high fats in diet? 1 for yes and 0 for no\n");
    scanf("%d", &fats);

    if(fats == 1){
        points = points +1;
    }else if(fats == 0){
        points = points;
    }else{
        goto end;
    }


    end:
    printf("the points for you to be affected by Cardiovascular disease are: %d", points);
    return 0;
}