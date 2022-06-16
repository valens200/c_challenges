#include<stdio.h>
#include<string.h>

int main(){

     char name[20];
     char changer[60];
     char text[50] = "valens bin is a powerful man" "i ever seen " "in this world";
     puts(text);
     printf("enter your name");
    //  gets(name);
     printf("you name is");
    //  puts(name);


    int length = strlen(name);
    int length2 = strlen(changer);
    int i,j;
    int *one;
    int *two;

    for(i=length; i>0; i--){
        for(j=0; j<length2; j++){
           name[i] = changer;

        }

    }


    return 0;
}