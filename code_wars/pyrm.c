#include<stdio.h>

int main(){
    int no,i,x,y=35;
    printf("enter the value ");
    scanf("%d", &no);
   for(y=0; y<no; y++){
       goto(x,y+1);
       for(i=0-y; i<=y; i++){
           printf("%3d", abs(i));

           x = x-3;
       }
   }

    return 0;

}