#include<stdio.h>
int main(){

    int num, i;
    long long fact = 1;
    printf ("Enter the number you want to know the factorial of:");
    scanf ("%d",&num);
    for (i=1; i<=num; i++)
        {
    fact *= i;
        }
    printf ("The factorial of %d is %lld\n", num,fact);
    return 0;
    }