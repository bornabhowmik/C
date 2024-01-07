#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[100]="hello";
    char str_2[100]="world";
    char str_3[100];
    int len;
    strcpy(str_3,str_1);
    printf("strcpy(str_3,str_1):%s\n",str_3);
    strcat(str_1,str_2);
    printf("strcat(str_1,str_2):%s\n",str_1);
    len=strlen(str_1);
    printf("strlen(str_1):%d\n",len);
    return 0;
}
