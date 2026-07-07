#include<stdio.h>
int main (){
    float radius , circum , area , pi = 3.1415 ;
    printf ("Enter the radius: ");
    scanf ("%f",&radius);
    circum = 2 * pi * radius;
    area = pi * radius * radius;
    printf ("The circum is: %f\n",circum);
    printf ("The area is: %f",area);
    return 0;


}