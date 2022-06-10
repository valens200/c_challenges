#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int files = 3;
    int j;


    FILE *fileOf1;
    FILE *fileOf2;
    FILE *fileOf3;

    char file1[100];
    char file2[100];
    char file3[100];

     printf("enter the name of your first file including extensions.: ");
     scanf("%s",file1);
     printf("enter the second file");
     scanf("%s",file2);
     printf("enter the third file");
     scanf("%s",file3);
 
    fileOf1 = fopen(file1, "r");
    fileOf2 = fopen(file2, "r");
    fileOf3 = fopen(file3, "w");

    char c;

if(fileOf1 == NULL || fileOf2 == NULL || fileOf3 == NULL ){

    printf("err! can not open these files");
    exit(0);
}else {

   while ((c=fgetc(fileOf1)) != EOF){

       fputc(c,fileOf3);
   }

   while ((c=fgetc(fileOf2)) != EOF)
   {
       fputc(c,fileOf3);
   }
  printf("merged file1 and file2 into file3");

  fclose(fileOf1);
  fclose(fileOf2);
  fclose(fileOf3);
}


    return 0;
    
}