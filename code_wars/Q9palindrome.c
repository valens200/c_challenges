#include<stdio.h>
#include<string.h>

int main()
{
    
    char name1[100];
    char *name2  = fopen("test.text", "w");
    int i;
    int j;
    printf("ENter your name: ");
    gets(name1);
    for(i=strlen(name1);i>=0 ;i--){     
    }
    printf("%d",strlen(name2));
    printf("%s",name2);
    return 0;
}