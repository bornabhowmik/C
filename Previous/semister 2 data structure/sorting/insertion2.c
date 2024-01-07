#include<stdio.h>
int main()
{
    int a[]={-8,4,11,3,12};
    int i,value,hole;
    for(i=1;i<5;i++){
    value=a[i];
    hole=i;
    while(hole>0&&a[hole-1]>value)
    {
        a[hole]=a[hole-1];
        hole--;
    }
    a[hole]=value;
    }
    printf("sorted array:\n\n");
    for(i=0;i<5;i++){
    printf("\n\n");
    return 0;
    }
}
