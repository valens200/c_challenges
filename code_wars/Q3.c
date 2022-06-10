#include<stdio.h>

#include<string.h>
int main()
{
  char str1[100];
  char str2[100];
  int i;

  printf("Enter any word you want: ");
  scanf("%s", str1);
  printf("%s",str1 );

  i=0;
  while(str1[i]!='\0')
  {
      str1[i] = str2[i];
      i++;
  }
  for(i=0; i<strlen(str1); i++){
      if (str1[i] != '\0')
      {
          str1[i] = str2[i];
      }
      
  }
  if(str1 == str2){
      printf("it is palindrome!");
  }else{
      printf("not palindrome");
  }
  


















  return 0;
}