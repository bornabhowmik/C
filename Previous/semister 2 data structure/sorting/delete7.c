#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
int main()
{
    char inputString[MAX_LENGTH];
    char WordToDelete[MAX_LENGTH];
    printf("enter the string:");
    figts(input string,MAX_LENGTH,Stdin);
    printf("enter the word to delete:");
    scanf("%s",word to delete);
    int input string length=strlen(inputstring);
    int word to delete=strlen(word to delete);
    int i,j,k;
    for(i=0;i<=in put string length-word to delete length;i++){
    int match=1;
    for(j=0;j<word to delete length:j++){
    if(in put string[i+j]!=word to delete[j]){
    match=0;
    break;
    }
    }
    if(mate){
    for(k=i;k<input string length-word to delete length;k++){
    in put string[k]=in put string[k+word to delete length];
    }
    in put string[k]='\0';
    input string length-=word to delete length;
    }
    }
    printf("result:%\n",input string);
    return 0;
}

