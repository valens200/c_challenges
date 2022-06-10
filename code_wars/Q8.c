#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[100];
     int i;

    printf("Enter the long sentence mixed characters as you wish: ");
    gets(name);

    int length = sizeof(name)/sizeof(short);

    for(i=0; i<length; i++){
        if(islower(name[i]) > 0){

            name[i] = toupper(name[i]);
        }else if(isupper(name[i]) > 0){
            name[i] = tolower(name[i]);
        }else{
            name[i] == name[i];
        }
    }
    printf("the changed string is : %s", name);
    


    return 0;


}