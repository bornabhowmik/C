#include<stdio.h>
int main()
{
    int i,n,j,s;
    printf("enter the value");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<=n;i++){
        scanf("%d",a[i]);
    }
    scanf("%d",&s);
   int beg=0,end=n-1;
    int mid=(beg+end)/2;
    while (beg<=end &&a[mid]!=s){
    if(s<a[mid]){
        end=mid-1;
    }
    else{
    beg=(mid+1);
    }
    mid=(beg+end)/2;
    }
    if(a[mid]==s){
            printf("the item is not found:");
    }
    else{
            printf("the item is found number in %d index\n ",mid);
    }
    return 0;
    }









