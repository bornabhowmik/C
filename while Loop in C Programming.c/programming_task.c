#include <stdio.h>
int main() {

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    int count = 10;

    while(count>=1){
        int answer = number * count;
        printf("%d * %d = %d\n", number,count,answer);
        count = count - 1;
    }

    return 0;
}