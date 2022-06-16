#include<stdio.h>
int main(){

    int limit;
    printf("Enter your limitNUmber: ");
    scanf("%d",&limit);

    int myNumbers[4][5] = {
        {34,34,23,55,13},
        {56,45,34,43,45},
        {56,45,34,43,45},
        {56,45,34,43,45},
    
    };

    int length = sizeof(myNumbers)/sizeof(short);
    int i,j;
    int length2 = 5;

    for(i=0; i<length; i++){
        for(j=0; j<sizeof(myNumbers[i])/sizeof(short); j++){

            if(myNumbers[i][j] < limit){
                myNumbers[i][j] = 100;
            }else{
                myNumbers[i][j] = myNumbers[i][j];
            }
        }
    }

    for(i=0; i<length; i++){
        for(j=0; j<sizeof(myNumbers[i])/sizeof(short); j++){
            printf("%d\n", myNumbers[i][j]);
        }
    }

    

    return 0;
}