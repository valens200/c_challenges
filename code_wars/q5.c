#include<stdio.h>
int main(){

    int length1;
    int length2;
    int i;
    int j;
    int temp;
    int temper;

    printf("enter the length of your first and second array Array: ");

    for(i=0; i<=2; i++){
        scanf("%d %d",&length1,&length2);

    }

    int Array1[length1];
    int Array2[length2];

    printf("Enter the elements for Arraay1: ");

    for(i=0; i<=length1; i++){
        scanf("%d",&Array1[i]);
    }
    printf("Enter the elements of the second array: ");

    for(i=0; i<length2; i++){
        scanf("%d",&Array2[i]);
    }
     for(i=0; i<length2; i++){
        printf("%d\n",Array2[i]);
    }

     for(i=0; i<length2; i++){
        for(j=i+1; j<length2; j++){
            if(Array2[i]>Array2[j]){
                temp = Array2[i];
                Array2[i]=Array2[j];
                Array2[j]=temp;
            }
        }
    }
    for(i=0;i<length1;i++){
        for(j=i+1;j<length1;j++){
            if(Array1[i]>Array1[j]){
                temper = Array1[i];
                Array1[i]=Array1[j];
                Array1[j]=temper;
            }
        }
    }

    return 0;

}