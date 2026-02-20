#include<stdio.h>
int main (){
    float length , area , perimeter;
    printf ("Enter the length: ");
    scanf ("%f",&length);
    perimeter = 4 * length;
    area = length * length;
    printf ("The perimeter is: %f\n",perimeter);
    printf ("The area is: %f",area);
    return 0;
    
}