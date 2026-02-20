#include<stdio.h>
int main (){
    float radius,length,cube,cylinder,height, sphere,Radius;
    printf ("length of cube: ");
    scanf ("%f",&length);
    printf ("Radius of cylinder: ");
    scanf ("%f",&Radius);
    printf ("height of cylinder");
    scanf ("%f",&height);
    printf ("radius of sphere: ");
    scanf ("%f",&radius);
    cube = length * length * length;
    cylinder = 3.1415 * Radius * Radius * height;
    sphere = 4/3* (3.1415 * radius * radius *radius);
     printf ("Volume of cube: %f\n ",cube);
     printf ("Volume of cylinder: %f\n ", cylinder);
     printf ("Volume of cylinder: %f\n",sphere);
     return 0;
}