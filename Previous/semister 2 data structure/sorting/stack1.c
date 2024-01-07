#include<stdio.h>
int main()
{
    int i,n,top,stack;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    void pop()
    {
        if(top==-1)
        {
            printf("underflow");
        }
        else
        {
            printf("%d",stack[top]);
            top--;
        }
        }
    }








