#include<stdio.h>

int get_anagram(char [], char []);

    int main(){

        char arr1[50];
        char arr2[50];

        int count;

        printf("enter the first string: ");
        scanf("%s", arr1);


        printf("enter the second string: ");
        scanf("%s", arr2);

        count = get_anagram(arr1,arr2);
        if(count == 1){
            printf("palindrome");
        }else{
            printf("not palindrome");
        }

    

    return 0;
}


int get_anagram(char arr1[], char arr2[]){


    int num1[30]={0}, num2[20] = {0}, i=0;

    while(arr1[i] != '\0'){
        num1[arr1[i] - 'a']++;
        i++;
    }
    i=0; 
    while (arr2[i] != '\0'){
        num2[arr2[i] - 'a']++;
        i++;
    }


    for(i=0; i<20; i++){
        if(num1[i] == num2[i]){
            return 1;
        }else{
        return 0;
        }

    }
    

}
