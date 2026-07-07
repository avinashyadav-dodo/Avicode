#include<stdio.h>

int main (){

    float a , b , temp;
    printf ("Enter the first number: ");
    scanf ("%f",&a);

    printf ("Enter the second number: ");
    scanf ("%f",&b);

    temp = a;
    a = b;
    b = temp;

    printf ("swaped value of a is %f\n",a);
    printf ("swaped value of b is %f",b);

    return 0;
}