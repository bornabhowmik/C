/*This program takes input from the user It stores it in the age variable And, print the value using print()*/

#include<stdio.h>
int main(){

    int age;

    printf("Enter the value of age: ");
    scanf("%d", &age);

    printf("Age: %d", age);

    return 0;
}