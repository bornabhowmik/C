#include<stdio.h>
int main(){
    int student[40],pos,i,size,value;
    printf("enter no of element in array");
    scanf("%d",&size);
    printf("enter %d elements are:",size);
    for(i=0;i<size;i++)
        scanf("%d",&student[i]);
    printf("enter the position where you want to search:");
    scanf("%d",&pos);
    printf("enter the value into that position");
    scanf("%d",&value);
    for(i=size-1;i>=pos-1;i--)
        student[i+1]=student[i];
    student[pos-1]=value;
    printf("final array after inserting");
    for(i=0;i<=size;i++)
        printf("%d ",student[i]);
    return 0;
}
