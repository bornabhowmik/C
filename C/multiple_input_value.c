#include<stdio.h>
int main(){

    double number;
    char alphabet;

    printf("Enter input value: ");

    scanf("%lf %c", &number, &alphabet);

    printf("\nNumber: %lf", number);
    printf("\nAlphabet: %c", alphabet);

    return 0;
}