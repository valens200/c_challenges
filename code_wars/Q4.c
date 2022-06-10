#include<stdio.h>
#include<math.h>

int main(){
    int i;
    int Array1[40];
    int length1;
    int length2;
    int Array2[40];
    int columns;

    printf("enter the how length you want matrix one :");
    scanf("%d",&length1);
    printf("enter the length of how you want matrix");
    scanf("%d", &length2);

   
    printf("Each row is composed by how many numbers? ");
    scanf("%d", &columns);
 printf("ENter the elemets of second row");
    for(i=0; i<columns; i++)
    {
        scanf("%d",&rows1[i]);
    }
    int size = sizeof(rows1)/sizeof(short);

    for(i=0; i<size; i++){
        printf(" the elements inserted in second row are: %d\n", rows2[i]);
    }


    return 0;
}