#include <stdio.h>
int main() {
    int N, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
     printf("Odd numbers from 1 to %d are:\n", N);
    for(i = 1; i <= N; i++) 
    {
    if(i % 2 != 0) 
    {
    printf("%d ", i);
    sum += i;
    }
    }
    printf("\nSum of odd numbers from 1 to %d is: %d", N, sum);
    return 0;
}