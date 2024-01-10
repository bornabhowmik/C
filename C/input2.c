#include<stdio.h>
int main(){

    double number;
    char alphabet;

    printf("Enter double input: ");
    scanf("%lf", &number);

    printf("Enter char input: ");
    scanf("\n%c", &alphabet);

    printf("Number: %lf", number);
    printf("\nAlphabet: %c", alphabet);

    return 0;
}