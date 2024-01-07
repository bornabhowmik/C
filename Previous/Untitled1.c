#include<stdio.h>
int main()
{
    int num[]={10,20,30};
    int value, pos=-1,i;
    printf("enter the value you want search:");
    scanf("%d",&value);
    for(i=0;i<3;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("item is not found");
    }
    else{
            printf("the value is found at position %d",pos);
    }
    return 0;
}



