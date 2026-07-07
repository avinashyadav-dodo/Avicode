#include<stdio.h>
int main (){
    double length , area , perimeter;
    printf ("Enter the length: ");
    scanf ("%lf",&length);
    perimeter = 4 * length;
    area = length * length;
    printf ("The perimeter is: %lf\n",perimeter);
    printf ("The area is: %lf",area);
    return 0;
    
}