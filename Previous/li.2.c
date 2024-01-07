SS#include<stdio.h>
int main()
{
    int num[101]={4,6,8,9};
    int value,i,pos=-1;
    printf("enter the value you want to search:");
    scanf ("%d",&value);
    for(i=0;i<4;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("the item is not found:");
    }
    else{
            printf("the item is found at position %d",pos);
    }
    return 0;

}
