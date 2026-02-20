#include<stdio.h>
int main (){
    float radius , circum , area;
    printf ("Enter the radius: ");
    scanf ("%f",&radius);
    circum = 2 * 3.1415 * radius;
    area = 3.1415 * radius * radius;
    printf ("The circum is: %f\n",circum);
    printf ("The area is: %f",area);
    return 0;


}