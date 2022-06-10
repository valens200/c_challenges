#include <stdbool.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

  int is_pangram(const char *str_in) {

  int i, j;
  
  for(i=0; i<strlen(str_in) ; i++){
    for(j=strlen(str_in);j>0;  j--){
       if(isdigit(str_in[i]) || isdigit(str_in[j])){
      continue;
    }
      
      if(str_in[i] == str_in[j+1]){
        return 1;
      }else{
        return 0;
      }
    }
    
  }

}

int main(){
  printf("%d", is_pangram("The quick, brown fox jumped over the lazy dog!"));
  
  return 0;
}