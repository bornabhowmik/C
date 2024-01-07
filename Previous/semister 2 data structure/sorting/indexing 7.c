#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    strcpy(str,"hello,world!");
    for(i=0;i<strlen(str);i++)
    {
        printf("the character at index %d is:%c\n",i,str[i]);
    }
    return 0;
}



