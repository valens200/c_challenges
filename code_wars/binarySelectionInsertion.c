// Online C compiler to run C program online
#include <stdio.h>
int i,j,k,emp,position, key;



int buble(int arr[], int size){
    for(i=0; i<=size; i++){
        if(arr[i] > arr[i+1]){
            emp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = emp;
        }
    }
}

int selection(int arr[], int size){
    for(i=0; i<size; i++){
        position = i;
        for(j=i+1; j<size; j++){
            if(arr[position] < arr[j]){
                position = j;
            }
            if(arr[i] == arr[i+1]){
                continue;
            }
            if(position != i){
                emp = arr[i];
                arr[i] = arr[position];
                arr[position] = emp;
            }
        }
    }
}

int insertion(int arr[], int size){
    int i,j,key;
    for(i=0; i<size; i++){
        key = arr[i];
        j= i-1;
        
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
 int numbers[5] = {34,4,0,1,34};
 insertion(numbers, 5);
 for(i=0; i<5; i++){
     printf("%d\t", numbers[i]);
 }
  
    
    return 0;
}