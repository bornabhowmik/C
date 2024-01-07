#include<stdio.h>
int main()
{
    int num[101],n;
    printf("enter the value you want to search:");
    scanf("&d",&n);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[i]>a[j+1])
            {
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return 0;
}

